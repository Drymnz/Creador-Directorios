#include "Constructor.h"
Constructor::Constructor(){
    exit = (bool *)malloc(sizeof(bool));
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
        mostrar.menu();
        (opcion) = pet.getString(WHITE);
        // ejecutar la logica del programa
        if ((opcion).compare("1") == 0)
        {
            mostrar.println("se iniciara la ejecuccion");
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