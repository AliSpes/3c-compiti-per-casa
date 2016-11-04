#include <iostream>

using namespace std;

int main()
{
  int N;
  int i;
  char ripetizione;

cout << "\n*******************************************************************************\n";
cout << " ESERCIZIO 31 PAGINA 69 \n\n";
cout << " Scrivi un programma in C++ che dato un numero intero inferiore di 1000, si \n desidera sapere il numero di centinaia, decine e unita' che contiene\n";
cout << " (ad esempio 123 e' composto da un centinaio, due decine e tre unita')\n";
cout << "\n********************************************************************************\n";

do
{
    cout << " SVOLGIMENTO:\n\n";
    bool errore_inserimento = false;
    do
    {
         if (errore_inserimento)
            {
               cout << endl << "  STAI SBAGLIANDO! DEVE ESSERE MINORE DI 1000!!\n"; //messaggio d'errore se il numero inserito non corrisponde a nessun segno
               cout << endl;
            }
        cout<< " Inserisci un numero intero minore di 1000: ";
        cin>> N;
        errore_inserimento = (N>=1000);

    } while (errore_inserimento);
cout << "\n RISULTATO: \n\n";
if (N!=0)
{
i = N / 100;
if (i != 0)
{
    cout<< "     Il numero ha "<<i<<" centinaia";
}
else if (i == 0)
{
    cout<< "     Non ci sono centinaia";
}
N = N - (i*100);
i = N/10;
if (i != 0)
{
    cout<< "\n     Il numero ha "<<i<<" decine";
}
else if (i == 0)
{
    cout<< "\n     Non ci sono decine";
}
N = N - (i*10);
i = N;
if (i != 0)
{
    cout<< "\n     il numero ha "<<i<<" unita'\n";
}
else if (i == 0)
{
    cout<< "\n     Non ci sono unita'\n";
}
}
else
{
    cout<< "\n     0 NON HA NE CENTINAIA, NE DECINE, NE UNITA'\n\n";
}

do
  {
             cout << "\n********************************************************************************\n";

       cout<< "\n  PROGRAMMA PER RIPETERE L' ALGORITMO "; //opzione per ripetere il programma
       cout << endl;
       cout << endl;
       cout << "  1> IMMETTA (s) SE VUOLE RIPETERE "; // s = SI (ripeti)
        cout << endl;
       cout << endl;
        cout << "  2> IMMETTA (n) SE VUOLE TERMINARE "; // n = NO (termina)
         cout << endl;
       cout << endl;
       cout<<"  -------------------------->  IMMETTA LA SUA SCELTA: ";//immetti s o n
       cin>> ripetizione; // schiaccia s o n
       cout << "\n\n********************************************************************************\n";

    if (ripetizione != 's' & ripetizione != 'n') //se diversi da s o n
    {
       cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
       cout<< endl;
       cout<< endl;
       cout << "  STA SBAGLIANDO! PUO' IMMETTERE SOLO 's' o 'n'"; //messaggio d' errore
    }
    else //altrimenti
    {
        break; //pausa
    }
  } while (ripetizione != 's' || ripetizione != 'n'); //finchè diversi da s o n
    } while (ripetizione != 'n'); //finchè diverso da n
return 0;
}
