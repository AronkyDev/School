#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(){
    int nascosto, tentativo;
    srand((unsigned)time(0)); 
    nascosto = (rand()%1000)+1; 

    cout << "Prova ad indovinare il numero ;)" << endl;
    cin >> tentativo;
    do {
        if(tentativo < nascosto){
        cout << "Il numero da te inserito e' troppo piccolo, provane uno piu' grande!" << endl;
        cin >> tentativo;
        }
        else {
        cout << "Il numero da te inserito e' troppo grande, riprova con uno piu' piccolo! " << endl;
        cin >> tentativo;
        }
    }
    while (nascosto != tentativo);
    
    cout << "Bravo! Hai indovinato!" << endl;
    
    system("PAUSE");
    return 1;
}