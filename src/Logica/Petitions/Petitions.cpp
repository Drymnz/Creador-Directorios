#include <iostream>
#include <string>
#include "Petitions.h"
using namespace std;
Petitions::Petitions()
{
}
string Petitions::getString(string _message)
{
    string send = "null XD";
    cout << _message;
    getline(cin, send);
    return send;
}
/*
convierte el string a mayusculas
@text
*/
void Petitions::mayus(string &text)
{
    int size = text.length();
    for (int i = 0; i < size; i++)
    {
        text[i] = towupper(text[i]);
    }
}
/*
verifica el string de entrada si solo contine numeros
@_text
*/
bool Petitions::numString(string _text)
{
    try
    {
        int a = stoi(_text);
        a++;
    }
    catch (const std::exception &e)
    {
        return false;
    }
    return true;
}
/*
convierte el string de entrada a numeros
*/
int Petitions::stringToInt(string _text)
{
    int send = -1;
    if (numString(_text))
    {
        send = stoi(_text);
    }
    else
    {
        cout << "por favor ingres un numero" << endl;
    }
    return send;
}