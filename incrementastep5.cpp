#include <iostream>
using namespace std;

int main(){
        int n, numero, somma=0;

	cout<<"Quanti numeri? ";
	cin>>n;
	
	for(;n>0;n--){
		cout<<"Inserisci il numero: ";
		cin>>numero;
		somma+=numero;
	} 
	cout<<"La somma e': "<<somma;

    system("PAUSE");
	return 0;
}