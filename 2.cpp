#include <iostream>

using namespace std;

int main()
{
    string tekst;
    cin >> tekst;
    string litera;
    cin >> litera;
    char znak = litera[0];
    int dlugosc = tekst.size();
    int wynik = 0;
    for(int i = 0; i < dlugosc; i++)
    {
        char znak2 = tekst[i];
        if(znak2 == znak)
        {
            wynik = wynik + 1;
        }
    }
    cout << wynik << endl;
}
