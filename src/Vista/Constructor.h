#include "MenuPrincipal.h"
#include "../Logica/Petitions/Petitions.h"

const string ACCEPT = "ACEPTAR";
const string NO = "NO";
const string WHITE = "Escribir:";
const string ERROR = "ingrese un dato correcto";

class Constructor
{
private:
    bool *exit;
    int *limiteSuperior;
    int *limiteInferior;
    string extencionArchivoSalida;
    string nombreArchivoSalida;
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