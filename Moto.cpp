#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	double costoMoto, risparmi, importo, cifraRim, cifraRim2;
	risparmi = 0;
	//system("color 0c"); Per colorare il testo del CMD
	
	cout << "Benvenuto! Inserisci il costo della tua moto!" << endl;
	cin >> costoMoto;
	
	while (risparmi<costoMoto){
	cout << "Inserisci l'importo dei tuoi risparmi" << endl;
	cin >> importo;
	risparmi = risparmi + importo;
	cifraRim2 = costoMoto - risparmi;
	if (costoMoto-risparmi>0)
	cout << "Ti servono ancora: " << cifraRim2 << " euro per acquistare la moto" << endl;
	}
	cout << "Hai sufficenti risparmi per comprare la moto!" << endl;
	
	if (risparmi>costoMoto){
	cifraRim = (risparmi - costoMoto);		
	cout << "Inoltre ti rimangono: " << cifraRim << " euro" << endl;
	}
	
	system("PAUSE");
	
}




