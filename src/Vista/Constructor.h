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
    string dato;
    MenuPrincipal mostrar;
    Petitions pet;
public:
    Constructor();
    void iniciar();
    void menu();
};