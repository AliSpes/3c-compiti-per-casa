#include <iostream>
#include <string>

using namespace std;

int main()
{
    char nome[6];
    nome[0] = 'E';
    nome[1] = 'l';
    nome[2] = 'i';
    nome[3] = 's';
    nome[4] = 'a';
    nome[5] = '\0';

    cout<< nome << endl;;
    char cognome[8] = {'R','o','s','e','t','t','a','\0'};
    cout << cognome << endl;
    cout << nome << " " << cognome << endl;
    char indirizzo[] = "Via gianni 45, Marghera";
    cout << indirizzo << endl;
    string telefono = "3456739489";
    cout << telefono << endl;
    return 0;
}
