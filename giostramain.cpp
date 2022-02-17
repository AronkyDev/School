#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

  int nadulti, niadulti, nbambini, nibambini;
  //string lim;
  //int onoff;
  double ticketadulti, ticketbambini, finadulti, finbambini, fintot;
  double nmax;
  double totpersone;
  double limite;
  bool onoff;

  //onoff = 0;
  onoff = false;
  finadulti = 0;
  finbambini = 0;
  fintot = 0;
  niadulti = 0;
  nibambini = 0;
  totpersone = 0; // AKA "Unità"



  cout << "Inserisci il numero necessario di unita' piene per far partire la Giostra" << endl;
  cin >> nmax;
  cout << "Inserisci il prezzo del ticket per adulti" << endl;
  cin >> ticketadulti;
  cout << "Inserisci il prezzo del ticket per bambini" << endl;
  cin >> ticketbambini;
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

  while (totpersone < nmax) {
    cout << "----------------------------------------------------------------" << endl;
    cout << "Al momento sono state occupate " << totpersone << " unita' sulla Giostra" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Inserisci il numero di adulti sulla Giostra" << endl;
    cin >> nadulti;
    niadulti = nadulti + niadulti;

    if (niadulti < nmax) {
      cout << "Inserisci il numero di bambini sulla Giostra" << endl;
      cin >> nbambini;
      nibambini = nbambini + nibambini;

      totpersone = nibambini / 2 + niadulti;
    } else if (niadulti >= nmax && nibambini == 0) {
      cout << "Gli adulti hanno occupato tutti i posti, nessun bambino e' salito." << endl;
      totpersone = nibambini / 2 + niadulti;
    }
  }
    finadulti = ticketadulti * niadulti;
    finbambini = ticketbambini * nibambini;
    fintot = finadulti + finbambini;

  if (totpersone > nmax) {
    limite = totpersone - nmax;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Il limite di sicurezza e' stato superato, devono scendere " << limite << " persone" << endl;
    cout << "----------------------------------------------------------------" << endl;
  } else if (totpersone <= nmax || onoff == true) {
    cout << "----------------------------------------------------------------" << endl;
    cout << "La Giostra e' partita!" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "STATISTICHE PROFITTI:" << endl;
    cout << "Profitto Ticket Adulti: " << finadulti << " Euro" << endl;
    cout << "Profitto Ticket Bambini: " << finbambini << " Euro" << endl;
    cout << "Profitto Ticket Totale: " << fintot << " Euro" << endl;
    cout << "STATISTICHE TECNICHE:" << endl;
    cout << "Limite Impostato: "<< nmax << " Unita'" << endl;
    cout << "Numero Adulti: " << niadulti << endl;
    cout << "Numero Bambini: " << nibambini << endl;
    cout << "----------------------------------------------------------------" << endl;
  }
  cout << "Fatto da Marco!" << endl;
  system("PAUSE");
  return 1;

}
