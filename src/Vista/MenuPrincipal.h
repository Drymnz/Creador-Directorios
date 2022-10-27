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
    void menu();
    void terminos();
    void println(string);
    void forLine(int, string);
};