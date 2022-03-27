#include <iostream>

using namespace std;

int nic()
{
    return 0;
}

int main()
{
    string tekst = "jnuawejuiasmximmcdniaazzzzzzaaaaaaaaiomianuakcjamcijs";
    char a = 'a';
    char z = 'z';
    int dlugosc = tekst.size();
    int wynik = 0;
    for(int i = 0; i < dlugosc; i++)
    {
        char znak = tekst[i];
        if(znak == a)
        {
            nic();
        }
        else
        {
            if(i%2==0)
            {
                nic();
            }
            else
            {
                wynik = wynik + 1;
            }
        }
    }
    cout << wynik << endl;
    wynik = 0;
    for(int i = 0; i < dlugosc; i++)
    {
        char znak = tekst[i];
        if(znak == z)
        {
            if(i%2==0)
            {
                wynik = wynik + 1;
            }
        }
    }
    cout << wynik << endl;
}