#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	int anoAtual, anoNasc, idade;
	cout << "Ano atual: ";
	cin >> anoAtual;
	cout << "Ano de nascimento: ";
	cin >> anoNasc;
	idade=anoAtual-anoNasc;
	cout <<"Você tem ou fará " << idade <<" Anos.";	
}
