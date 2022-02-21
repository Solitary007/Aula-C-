#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float preCompra, preVenda;
	cout <<"Qual o valor da Compra? ";
	cin >> preCompra;
	preVenda=preCompra+(preCompra*20/100);
	cout <<"O valor sugerido para venda é: " << preVenda <<"R$.";	
}
