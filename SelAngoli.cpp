#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int angolo;
    cout << "Inserisci l'ampiezza dell'angolo --> ";
    cin >> angolo;
    if (angolo > 360)
    {
        cout << "Errore! Il valore da te inserito supera i 360 gradi!" << endl;
    }
    else
    {
        if (angolo == 90)
        {
            cout << "L'angolo da te inserito e' retto!" << endl;
        }
        if (angolo < 90)
        {
            cout << "L'angolo da te inserito e' acuto" << endl;
        }
        if (angolo > 90)
        {
            cout << "L'angolo da te inserito e' ottuso" << endl;
        }
    }
    system("PAUSE");
    return 0;
}