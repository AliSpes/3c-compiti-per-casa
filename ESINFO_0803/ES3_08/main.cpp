#include <iostream>
#include <stdlib.h>

using namespace std;

void OttieniDimensione(int&);
void InserimentoNUM(int [], int);
void stampa (int [], int);

int main (){
int VETTORE [10], dimensione;
cout<<"\n*******************************************************************************\n";
OttieniDimensione(dimensione);
InserimentoNUM(VETTORE,dimensione);
cout<< endl<< "  ";
system("PAUSE");
cout<<"\n*******************************************************************************\n";
system("CLS");
cout << "\n  Elementi invertiti: \n";
stampa (VETTORE,dimensione);
}

void OttieniDimensione (int& dimensione){
    do{
        cout << "  Inserisci il numero di elementi: ";
        cin >> dimensione;
    } while (dimensione >10 || dimensione <0);
}
void InserimentoNUM(int vet [], int dimensione){
    for (int i=0;i<dimensione;i++){
        cout << "  Inserisci il " << i << " valore:  ";
        cin >> vet[i];
    }
}
void stampa (int vet[], int dimensione){
    for (int i=dimensione-1; i>=0;i--){
        cout<< "\n  Elemento " << i << ": " << vet[i] << " \n";
    }
}
