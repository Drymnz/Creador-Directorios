#include "MenuPrincipal.h"
void MenuPrincipal::menu()
{
    this->forLine(spect, icon);
    this->println("<<opcions 1>> \"Iniciar\"");
    this->println("<<opcions 2>> \"Agregar listado\"");
    this->println("<<opcions 3>> \"Eliminar listado\"");
    this->println("<<opcions 4>> \"Editar listados\"");
    this->println("<<opcions 5>> \"Configuraciones\"");
    this->println("<<opcions 0>> \"Salir\"");
    this->forLine(spect, icon);
}
void MenuPrincipal::configuraciones(){
    this->forLine(spect, icon);
    this->println("<<opcions 1>> \"Editar el limite inferior\"");
    this->println("<<opcions 2>> \"Editar el limite superior\"");
    this->println("<<opcions 3>> \"Editar el nombre del archivo\"");
    this->println("<<opcions 4>> \"Editar el nombre de la extencion del archivo\"");
    this->println("<<opcions 0>> \"Retroceder\"");
    this->forLine(spect, icon);
}
void MenuPrincipal::terminos()
{
    this->forLine(spect, icon);
    this->println("Colocar los terminos y condicciones de la app");
    this->println("   ");
    this->println("<<Escribir \"Aceptar\" >>>");
    this->println("<<Escribir \"NO\" para salir del programa>>");
    this->forLine(spect, icon);
}
void MenuPrincipal::println(string text)
{
    cout << endl
         << text;
}
void MenuPrincipal::forLine(int _num, string text)
{
    cout << endl
         << text;
    for (int i = 0; i < _num - 1; i++)
    {
        cout << text;
    }
    cout << endl;
}