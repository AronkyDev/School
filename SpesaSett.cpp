#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int consuvia, costogior, costosett;
    float consukm, distkm, costolt;
    cout << "Inserisci la distanza in KM" << endl;
    cin >> distkm;
    cout << "Inserisci il consumo di benzina per KM della tua auto" << endl;
    cin >> consukm;
    cout << "Inserisci il costo della benzina al litro" << endl;
    cin >> costolt;

    consuvia = distkm * consukm;
    costogior = consuvia * costolt;
    costosett = costogior * 5;

    cout << "Il consumo del viaggio e' pari a: " << consuvia << endl;
    cout << "Il costo giornaliero e' pari a: " << costogior << endl;
    cout << "Il costo settimanale e' pari a: " << costosett << endl;

    system("PAUSE");
    return 0;
}