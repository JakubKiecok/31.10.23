#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream plik;
    string linia;
    plik.open("dane.txt", ios::in);
    int sumap = 0;
    int sumanp = 0;

    if (plik.good() == true)
    {
        cout << "MOM FILE CHLOPIE" << endl;
        while (getline(plik, linia))
        {
            if (stoi(linia) % 2 == 0)
            {
               sumap = sumap + stoi(linia);
            }
            else
            {
                sumanp = sumanp + stoi(linia);
            }
        }
        cout << "Suma liczb parzystych = " << sumap << endl;
        cout << "Suma liczb nie pazrtstych = " << sumanp << endl;
    }
    else
    {
        cout << "NI MOM FILE CHLOPIE" << endl;
    }

    plik.close();

    return 0;
}