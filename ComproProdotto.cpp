#include <iostream>                 
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	double Soldi;
	double Prezzo;
	double Risultato;
	double Risultato2;
	cout << "Inserisci i soldi a disposizione -> " << endl;
	cin >> Soldi;
	cout << "Inserisci prezzo -> " << endl;
	cin >> Prezzo;
	
	if(Soldi>=Prezzo)
	{	
	cout << "Ti puoi permettere il prodotto scelto" << endl;
	Risultato = Soldi - Prezzo;
	cout << "Ti restano " << Risultato << " Euro" << endl;
	cout << "Ti aspettiamo la prossima volta!";
	}
	else
	{
	cout << "Mi dispiace informarti che non disponi dei soldi necessari per concludere la transazione" << endl;
	Risultato2 = Prezzo - Soldi;
	cout << "Ti servono " << Risultato2 << " Euro";
	}
	
	system("PAUSE");
	return 0;
}
