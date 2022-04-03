#include <iostream>

using namespace std;

int main()
{
    string tekst;
    cin >> tekst;
    int dlugosc = tekst.size();
    for(int i = dlugosc-1; i >= 0; i--)
    {
        char znak = tekst[i];
        cout << znak;
    }
}
