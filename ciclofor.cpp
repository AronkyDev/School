#include <iostream>                   // Aggiunta Librerie
using namespace std;                  // Definizione del namespace "standard"

int main(){	                          
        int n;                        // Init variabile n

	for(n=5;n<=100;n+=5){             // for, dichiara il valore della n pari a 5, dichiara che se n =< a 100 si esce dal 
                                      //loop e in fine dichiara che ad ogni iterazione si deve aggiungere 5 a n.
		cout<<n<<endl;                // Scrittura della var n  
	} 
	
	return 0;
}