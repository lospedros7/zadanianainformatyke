#include <iostream>

using namespace std;

int main()
{
    string tekst;
    getline(cin, tekst);
    char spacja = ' ';
    int wynik = 0;
    for(int i = 0; i < tekst.size(); i++)
    {
        char znak = tekst[i];
        wynik = wynik + 1;
        if(znak == spacja)
        {
            wynik = wynik - 1;
        }
        else if(znak != spacja)
        {
            wynik = wynik;
        }
    }
    cout << wynik << endl;
}