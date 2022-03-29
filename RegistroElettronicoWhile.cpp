#include <iostream>                   // Aggiunta Librerie
using namespace std;                  // Definizione del namespace "standard"

int main(){	
                          
	int i=0;
	int nalunni = 0;
	double votouno = 0, votodue = 0, vototre = 0, votoquattro = 0, votocinque = 0;
	double mediavoti = 0, mediatot = 0;
	
	cout << "Benvenuto! Inserisci il numero di alunni dei quali vuoi calcolare la media: ";
	cin >> nalunni;
	
	
	while(nalunni>i){
		cout << "Inserisci il primo voto: ";
		cin >> votouno;
		cout << "Inserisci il secondo voto: ";
		cin >> votodue;
		cout << "Inserisci il terzo voto: ";
		cin >> vototre;
		cout << "Inserisci il quarto voto: ";
		cin >> votoquattro;
		cout << "Inserisci il quinto voto: ";
		cin >> votocinque;
		
		mediavoti = votouno + votodue + vototre + votoquattro + votocinque;
		mediatot = (mediavoti / 5);
		cout << "---------------------------------------------------" << endl;
		cout << "LA MEDIA DEL ALUNNO N. " << i + 1 << " E' "<< mediatot << endl;
		cout << "---------------------------------------------------"<< endl;
		i++;
	}

	system("PAUSE");
}
	
