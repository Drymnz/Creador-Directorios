#include "Vista/Constructor.h"

int main(int argc, char const *argv[])
{    
    Constructor ejecutable;
    ejecutable.iniciar();
    ejecutable.~Constructor();
    return 0;
}
