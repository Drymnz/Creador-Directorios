#include <iostream>
#include <string>

using namespace std;
class MenuPrincipal
{
private:
    int spect = 80;
    string icon = "*";
public:
    MenuPrincipal(){};
    void menu(string,string,string,string);
    void configuraciones(string,string,string,string);
    void terminos();
    void println(string);
    void forLine(int, string);
};