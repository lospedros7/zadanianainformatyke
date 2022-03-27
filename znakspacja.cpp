#include <iostream>

using namespace std;

int main()
{
    string tekst;
    cin >> tekst;
    int dlugosc = tekst.size();
    for(int i = 0; i < dlugosc; i++)
    {
        char spacja = ' ';
        char znak = tekst[i];
        cout << znak << spacja;
    }
}