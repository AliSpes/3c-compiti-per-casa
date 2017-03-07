#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

void OttieniDimensione(int&);
void InserimentoNUM(int [], int);
int SOMMA (int [], int);

int main ()
{
int VETTORE [10], dimensione, somma;
float RAD;
OttieniDimensione(dimensione);
InserimentoNUM(VETTORE,dimensione);
cout<< endl<< "  ";
system("PAUSE");
cout<<"\n*******************************************************************************\n";
system("CLS");
RAD = sqrt(SOMMA(VETTORE,dimensione));
cout << "\n  Il risultato della radice della somma di tutti gli elementi è: "<< RAD;
cout<< endl;

}

void OttieniDimensione(int&dimensione){
    do{
        cout << "  Inserisci il numero di elementi: ";
        cin >> dimensione;
    } while (dimensione >10 || dimensione <0);
}
void InserimentoNUM(int vet [], int dimensione){
    for (int i=0;i<dimensione;i++)
        {
        cout << "  Inserisci il " << i << " valore:  ";
        cin >> vet[i];
        }
}

int SOMMA(int vet[],int dimensione){
    int somma=0;
    for (int i=0;i<dimensione;i++){
        somma=somma+vet[i];
    }
    return somma;
}
