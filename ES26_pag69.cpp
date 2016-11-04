#include <iostream>

using namespace std;
int main()
{
int N, I=2, C=1;
char ripetizione;
do
{
cout<<"\n*************** PROGRAMMA PER VERIFICARE CHE UN NUMERO SIA PRIMO ***************\n";
cout<<"  Insersci un numero: ";
cin>> N;
if(N==1)
cout<<"\n                        Il numero e' primo!!"<<endl;
else if(N==2)
cout<<"\n                        Il numero e' primo!!"<<endl;
while(I<=N)
{
I=I*C;
I++;
if(I==N)
{
cout<<"\n                        Il numero e' primo!!"<<endl;
break;
}
if(N%I==0)
{
cout<<"\n                        Il numero non e' primo!!"<<endl;
break;
}
}
cout<<"\n********************************************************************************";
do
  {
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
