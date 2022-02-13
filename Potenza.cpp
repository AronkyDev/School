#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    const int numeroBase = 2;
    int numeroIndice = 0, i = 0, risultato = 1, risfin, divisione = 0;

    cout << "Inserisci l'indice della potenza alla quale vuoi elevare il 2" << endl;
    cin >> numeroIndice;

    while(numeroIndice > 16){
    cout << "L'esponente da te inserito risulta troppo elevato, inserisci un esponente pari o inferiore a 16" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Inserisci l'indice della potenza alla quale vuoi elevare il 2" << endl;
    cin >> numeroIndice;
    }

    for (i=1; i <= numeroIndice; i++){
        risultato = risultato * numeroBase;
    }
    cout << risultato << endl;
    system("PAUSE");
}