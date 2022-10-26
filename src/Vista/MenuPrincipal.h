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
    void terminos();
    void println(string);
    void forLine(int, string);
    void quetion(string);
    void angry(string);
    void natural(string);
    void npsMidimString(string);
    void npsLegsString(string);
    void npsFaceString(string);
    void npsEarsString(string);
    void listFilling();
    void menu(string _name);
};