#include <iostream>
#include <string>

using namespace std;

int main()
{
    char nome[6];
    nome[0] = 'A';
    nome[1] = 'l';
    nome[2] = 'i';
    nome[3] = 'c';
    nome[4] = 'e';
    nome[5] = '\0';

    cout<< nome << endl;;
    char cognome[9] = {'R','o','s','s','e','t','t','i','\0'};
    cout << cognome << endl;
    cout << nome << " " << cognome << endl;
    char indirizzo[] = "Via O. Zen 46, Marghera";
    cout << indirizzo << endl;
    string telefono = "3421439084";
    cout << telefono << endl;
    return 0;
}
