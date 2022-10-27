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
    int *limiteInverior;
    string dato;
    MenuPrincipal mostrar;
    Petitions pet;
public:
    Constructor();
    void iniciar();
    void menu();
    void configuraciones();
};