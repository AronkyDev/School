#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

    int nadulti, niadulti, nbambini, nibambini;
    string lim;
    int onoff;
    double nmax;
    double totpersone;
    double limite;

    //onoff = 0;
    niadulti = 0;
    nibambini = 0;
    totpersone = 0;

    cout << "Inserisci il numero di persone che possono far partire la Giostra" << endl;
    cin >> nmax;
    //cout << "Desideri attivare i limitatori di sicurezza? [Y/N] " << endl;
    //cin >> lim;
    //if(lim!="Y" && lim!="N"){
    //cout << "Input non corretto. Attivazione automatica limitatori" << endl;   
    //} else if (lim="Y"){
    //cout << "Limitatori attivati con successo" << endl;
    //onoff = 1;
    //} else if (lim="N"){
    //cout << "Limitatori disattivati"
    //onoff = 2;
    //}

    while (totpersone<nmax){
    cout << "----------------------------------------------------------------" << endl;        
    cout << "Al momento ci sono " << totpersone << " persone sulla Giostra" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Inserisci il numero di adulti sulla Giostra" << endl;
    cin >> nadulti;
    niadulti = nadulti + niadulti;
    if (niadulti<nmax){
    cout << "Inserisci il numero di bambini sulla Giostra" << endl;
    cin >> nbambini;
    nibambini = nbambini + nibambini;

    totpersone = nibambini/2 + niadulti;
    } else if (niadulti>=nmax && nibambini==0){
    cout << "Gli adulti hanno occupato tutti i posti, nessun bambino e' salito." << endl;  
    totpersone = nibambini/2 + niadulti;
    } else if (niadulti>=nmax){
    cout << "La Giostra e' partita!" << endl;
    totpersone = nibambini/2 + niadulti;   
    }
    }
    
    if(totpersone>nmax){
    limite = totpersone-nmax;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Il limite di sicurezza e' stato superato, devono scendere " << limite << " persone" << endl;
    cout << "----------------------------------------------------------------" << endl;
    }

    if(limite != totpersone-nmax){
    cout << "----------------------------------------------------------------" << endl;
    cout << "La Giostra e' partita!" << endl;
    cout << "----------------------------------------------------------------" << endl;
    }
    cout << "Fatto da Marco!" << endl;
    system("PAUSE");
    return 1;

}