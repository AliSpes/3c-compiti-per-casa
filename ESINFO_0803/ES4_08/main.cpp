#include <iostream>
#include <stdlib.h>
using namespace std;

void OttieniDimensione(int&);
void InserimentoNUM(int [], int);
void ProdottoPari(int[],int);
void SommaDispari(int[],int);

int main (){
int VETTORE [10], dimensione,prodotto,somma;
cout<<"\n*******************************************************************************\n";
OttieniDimensione(dimensione);
InserimentoNUM(VETTORE,dimensione);
cout<< endl<< "  ";
system("PAUSE");
cout<<"\n*******************************************************************************\n";
system("CLS");
SommaDispari(VETTORE,dimensione);
ProdottoPari(VETTORE,dimensione);
}

void OttieniDimensione(int&dimensione){
    do{
        cout << "  Inserisci il numero di elementi: ";
        cin >> dimensione;
        cout<<endl;
    } while (dimensione >10 || dimensione <0);
}
void InserimentoNUM(int vet [], int dimensione){
    for (int i=0;i<dimensione;i++){
        cout << "  Inserisci il " << i << " valore:  ";
        cin >> vet[i];

    }
}
void SommaDispari(int vet [],int dimensione){
    int somma=0;
    for (int i=1;i<dimensione;i++){
        somma=somma+vet[i];
        i++;
    }
    cout << "\n  La somma delle componenti dispari e': " << somma << endl;
}
void ProdottoPari(int vet[],int dimensione){
    int prodotto=1;
    for (int i=0;i<dimensione;i++){
        prodotto=prodotto*vet[i];
        i++;
    }
    cout << "\n  Il prodotto delle componenti pari e': " << prodotto << endl;
}
