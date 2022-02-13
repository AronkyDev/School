#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	double Imponibile1;
	double Imponibile2;
	double Imponibile3;
	double PrezzoNOIVA;
	double PrezzoIVA;
	double PrezzoFinale;
	const double IVA = 22;
	
	cout << "Inserisci il prezzo del primo prodotto: " << endl;
	cin >> Imponibile1;
	cout << "Inserisci il prezzo del secondo prodotto: " << endl;	
	cin >> Imponibile2;
	cout << "Inserisci il prezzo del terzo prodotto: " << endl;
	cin >> Imponibile3;
	
	PrezzoNOIVA = Imponibile1 + Imponibile2 + Imponibile3;
	
	PrezzoIVA = PrezzoNOIVA * IVA / 100;
	
	cout << "L'IVA e' pari a: " << PrezzoIVA << " euro" << endl;
	
	PrezzoFinale = PrezzoIVA + PrezzoNOIVA;
	
	cout << "Il prezzo totale sara': " << PrezzoFinale << " euro";
	
	return 0;
}
