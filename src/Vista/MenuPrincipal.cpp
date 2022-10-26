#include "MenuPrincipal.h"
void MenuPrincipal::natural(string _me)
{
    forLine(spect, icon);
    npsEarsString(_me);
    npsFaceString("");
    npsLegsString("");
    npsMidimString("");
    forLine(spect, icon);
}
void MenuPrincipal::npsEarsString(string _me) { println("(\\(\\  " + _me); }
void MenuPrincipal::npsFaceString(string _me) { println("(^_^) " + _me); }
void MenuPrincipal::npsLegsString(string _me) { println("(“)(“)" + _me); }
void MenuPrincipal::npsMidimString(string _me) { println(" -   -" + _me); }
void MenuPrincipal::angry(string _me)
{
    forLine(spect, icon);
    npsEarsString(_me);
    println("(\\_/) ");
    npsLegsString("");
    npsMidimString("");
    forLine(spect, icon);
}
void MenuPrincipal::quetion(string _quetion)
{
    forLine(spect, icon);
    npsEarsString(_quetion);
    println("(°.°) ????");
    npsLegsString("");
    npsMidimString("");
    forLine(spect, icon);
}
void MenuPrincipal::listFilling()
{
    forLine(spect, icon);
    npsEarsString("¿Como lo deseas llenar?");
    println("(°.°) ???? <opcion 1> Archivo");
    npsLegsString("    <opcion 2> Aleatorio");
    npsMidimString("   <opcion 3> Llenado manual");
    forLine(spect, icon);
}
void MenuPrincipal::menu(string _name)
{
    forLine(spect, icon);
    println("<<Menu principal :: Jugad@r-->"+_name+">>");
    npsEarsString("<<Opcion 1 - Crear Juego>>");
    println("(°_°) <<Opcion 2 - Cambiar nombre>>");
    npsLegsString("<<Opcion 3 - Reportes>>");
    npsMidimString("<<Opcion 0 - Salir>>");
    forLine(spect, icon);
}
void MenuPrincipal::terminos()
{
    forLine(spect, icon);
    npsEarsString("Los terminos del juego es que seas de la USAC y que disfrute el juego");
    println("(°_°)   ");
    npsLegsString("<<Escribir \"Aceptar\" >>>");
    npsMidimString("<<Escribir \"NO\" para salir del programa>>");
    forLine(spect, icon);
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