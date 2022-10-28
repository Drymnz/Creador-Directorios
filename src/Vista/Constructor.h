#include "MenuPrincipal.h"
#include "../Logica/Petitions/Petitions.h"

const string ACCEPT = "ACEPTAR";
const string NO = "NO";
const string WHITE = "Escribir:";
const string ERROR = "ingrese un dato correcto";
const string NOMBRE_ARCHIVO_PREDETERMINADO = "listado";
const string NOMBRE_EXTENCION = "txt";
const int LIMITE_INICIAL = 2;

class Constructor
{
private:
    bool *exit;
    int *limiteSuperior;
    int *limiteInferior;
    string extencionArchivoSalida = NOMBRE_EXTENCION;
    string nombreArchivoSalida = NOMBRE_ARCHIVO_PREDETERMINADO;
    string dato;
    MenuPrincipal mostrar;
    Petitions pet;
public:
    Constructor();
    ~Constructor();
    void iniciar();
    void menu();
    void configuraciones();
    void cambiarLimite(string,int&);

};