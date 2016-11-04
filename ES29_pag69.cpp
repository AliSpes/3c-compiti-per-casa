#include <iostream>

using namespace std;

int main()
{
  int n,x;
  int MIN,MAX;
  int i=1;
  double somma;
  double MEDIA;
cout << "\n********************************************************************************\n";
cout << " ESERCIZIO 29 PAGINA 69 \n\n";
cout << " Scrivi un programma in C++ che legga da tastiera N numeri reali (N richiesto \n da tastiera) e calcoli, visualizzando i risultati:\n";
cout << "      a) Minimo; \n      b) Massimo; \n      c) Media; \n";
cout << "\n********************************************************************************\n";

    cout << " Quanti numeri vuoi immettere? ";
    cin >> n;

while (i<=n)
{
        cout << "\n  Immetti il valore n." << i <<": ";
        cin >> x;
        if (n == 1)
            MIN = x;
        else
            if (n < MIN)
                MIN = x;

        if (n > MAX)
            MAX = x;

        somma += x;
        MEDIA = somma/n;
        i++;
}
cout<< "\n Il massimo e': "<< MAX;
cout<< "\n Il minimo e': "<< MIN;
cout<< "\n La media e': "<< MEDIA;


}
