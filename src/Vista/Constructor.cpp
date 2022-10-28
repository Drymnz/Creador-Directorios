#include "Constructor.h"
Constructor::Constructor(){
    exit = (bool *)malloc(sizeof(bool));
    limiteInferior = (int *)malloc(sizeof(int));
    limiteSuperior= (int *)malloc(sizeof(int));
    *limiteInferior = LIMITE_INICIAL;
    *limiteSuperior = LIMITE_INICIAL;
}
void Constructor::iniciar(){
    *exit = false;
    while (*exit == false)
    {
        //Mostar los terminos del programa
        mostrar.terminos();
        this->dato = pet.getString(WHITE);
        pet.mayus(dato);
        if (ACCEPT.compare(dato) == 0)
        {
            //iniciar con el programa
            this->menu();
        }
        else if (NO.compare(dato) == 0)
        {
            //no acceptar los terminos del programa y salir
            *this->exit = true;
        }
        else
        {
            mostrar.println(ERROR);
        }
    }
}
// Menu principal
void Constructor::menu()
{
    string opcion = "";
    string palabra_clave_salir = "HELLRAISER";
    while ((opcion).compare(palabra_clave_salir) != 0)
    {
        //mostrar las opciones de menu
        mostrar.menu(to_string(*this->limiteSuperior),to_string(*this->limiteInferior),this->nombreArchivoSalida,this->extencionArchivoSalida);
        (opcion) = pet.getString(WHITE);
        // ejecutar la logica del programa
        if ((opcion).compare("1") == 0)
        {
            mostrar.println("se iniciara la ejecuccion");
        }
        // Agregar listado
        else if ((opcion).compare("2") == 0)
        {
            mostrar.println("Agregar listado");
        }
        // Eliminar listado
        else if ((opcion).compare("3") == 0)
        {
            mostrar.println("Eliminar listado");
        }
        // Editar listados
        else if ((opcion).compare("4") == 0)
        {
            mostrar.println("Editar listados");
        }
        // Configuraciones
        else if ((opcion).compare("5") == 0)
        {
            this->configuraciones();
        }
        // salir
        else if ((opcion).compare("0") == 0)
        {
            (opcion) = palabra_clave_salir;
            *this->exit = true;
        }
        else
        {
            mostrar.println(ERROR);
        }
    }
}
void Constructor::configuraciones(){
    string opcion = "";
    string palabra_clave_salir = "HELLRAISER";
    while ((opcion).compare(palabra_clave_salir) != 0)
    {
        //mostrar las opciones de menu
        mostrar.configuraciones(to_string(*this->limiteSuperior),to_string(*this->limiteInferior),nombreArchivoSalida,extencionArchivoSalida);
        (opcion) = pet.getString(WHITE);
        // Editar el limite inferior
        if ((opcion).compare("1") == 0)
        {
            mostrar.println("Ingrese el nuevo nuemero de limite inferior\n");
            this->cambiarLimite(pet.getString(WHITE),*this->limiteInferior);
        }
        // Editar el limite superior
        else if ((opcion).compare("2") == 0)
        {
            mostrar.println("Ingrese el nuevo nuemero de limite superior\n");
            this->cambiarLimite(pet.getString(WHITE),*this->limiteSuperior);
        }
        // Editar el nombre del archivo
        else if ((opcion).compare("3") == 0)
        {
            mostrar.println("Ingrese el nuevo nombre del archivo\n");
            this->nombreArchivoSalida = pet.getString(WHITE);
        }
        // Editar el nombre de la extencion del archivo
        else if ((opcion).compare("4") == 0)
        {
            mostrar.println("Ingrese el nuevo nombre de la extenxion del archivo\n");
            this->extencionArchivoSalida = pet.getString(WHITE);
        }
        // Retroceder
        else if ((opcion).compare("0") == 0)
        {
            (opcion) = palabra_clave_salir;
        }
        else
        {
            mostrar.println(ERROR);
        }
    }
}
void Constructor::cambiarLimite(string _nuevoNumero,int& limite ){
    if (this->pet.numString(_nuevoNumero))
    {
        limite = this->pet.stringToInt(_nuevoNumero);
    }
    else
    {
        mostrar.println(ERROR);
    }
    
}
Constructor::~Constructor(){
    if (!this->exit)
    {
        delete exit;
    }
    if (!this->limiteSuperior)
    {
        delete limiteSuperior;
    }
    if (!this->limiteInferior)
    {
        delete limiteInferior;
    }
}