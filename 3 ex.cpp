#include <iostream>
using namespace std;
int main(void)

{
char NOME[50], SOBRENOME[20];
cout << "Informe seu nome: ";
cin.getline(NOME, sizeof(NOME));
cout << "Informe seu sobrenome: ";
cin >> SOBRENOME;
cout << "Ola, \n " << NOME;
cout << " " << SOBRENOME << endl;
system ("pause");
return 0;
}
