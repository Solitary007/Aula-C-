#include <iostream>

using namespace std;

int main(){
	double peso, alt, imc;
	cout <<"Qual seu peso: ";
	cin >> "peso";
	cout <<"Qual sua altura: ";
	cin >>"alt";
	imc=peso/(alt*alt);
	if (imc<18,5){
		cout <<"Voc� est� Abaixo do peso!";
	}
	else if(imc>=18,5;imc<=24,9){
		cout <<" Voc� est� com o Peso normal!";
	}
