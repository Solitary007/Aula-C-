#include <iostream>
#Include <locale
using namespace std;

//calculadora simples.

int main() {
	setlocale(LC_ALL <<"portuguese")
	float num1, num2, resultado, op;
	cout <<"Insira o 1� numero: ";
	cin >>num1;
	cout <<"Insira o 2� numero: ";
	cin >>num2;
	cout <<"------------------------\n";
	cout <<"1 - adi��o\n";
	cout <<"2 - subtra��o\n";
	cout <<"3 - divis�o\n";
	cout <<"4 - multiplica��o\n";
	cout <<"Op��o: ";
	cin >>op;
	if(op==1){
		resultado=num1+num2;
		cout <<num1 <<" + " <<num2 <<" = "<<resultado;
	}
	else if(op==2){
		resultado=num1-num2;
		cout<<num1 <<" - " <<num2 <<" = "<<resultado;
	}
	else if(op==3){
		resultado=num1/num2;
		cout <<num1 <<" / " <<num2 <<" = "<<resultado;
	}
	else if(op==4){
		resultado=num1*num2;
		cout <<num1 <<" * " <<num2 <<" = "<<resultado;
	}
	else{
		cout <<"Op��o Invalida!";
	}
}
