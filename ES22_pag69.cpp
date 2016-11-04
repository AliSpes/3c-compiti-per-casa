#include <iostream>

using namespace std;

int main()
{
    int Numero, N, X;
    int Minore=0, Maggiore=0, Uguale=0;
    int i;
    char ripetizione;

cout << "\n********************************************************************************\n";
cout << " ESERCIZIO 22 PAGINA 69 \n\n";
cout << " Scrivi un programma in C++ che, dati in input N numeri interi e un numero X, \n determini: \n";
cout << "           a) Quanti numeri sono maggiori di X; \n           b) Quanti numeri sono minori di X; \n           c) Quanti numeri sono uguali a X; \n";
cout << "\n********************************************************************************\n";
do
{
cout << " SVOLGIMENTO:\n\n";
bool errore_inserimento = false;
do
{
if (errore_inserimento)
{
    cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
    cout << " Il numero deve essere POSITIVO!\n";
    cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";
}
cout << " Inserisci N: ";
cin >> N;
errore_inserimento = (N<=0);
} while (errore_inserimento);
cout << " Inserisci X: ";
cin >> X;
cout << endl;
cout << " Ora inserisci i numeri: \n\n";
do
{
   for (i=1; i<=N; i++)
   {
       cout << " Inserisci il n° "<< i << ": ";
       cin >> Numero;
   if (Numero<X)
     Minore++;
   else if (Numero>X)
     Maggiore++;
   else if (Numero=X)
     Uguale++;
   }


}while (i<=N);
cout << "\n********************************************************************************\n";
    cout << " RISULTATO: \n\n";
    cout << " I numeri maggiori di " << X << " sono: "<< Maggiore;
    cout << endl << " I numeri minori di " << X << " sono: "<< Minore;
    cout << endl << " I numeri uguali a " << X << " sono: "<< Uguale;
cout << "\n\n********************************************************************************\n";
do
  {
       cout<< "  PROGRAMMA PER RIPETERE L' ALGORITMO "; //opzione per ripetere il programma
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

