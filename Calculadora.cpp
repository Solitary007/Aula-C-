#include <iostream>
#Include <locale
using namespace std;

//calculadora simples.

int main() {
	setlocale(LC_ALL <<"portuguese")
	float num1, num2, resultado, op;
	cout <<"Insira o 1º numero: ";
	cin >>num1;
	cout <<"Insira o 2º numero: ";
	cin >>num2;
	cout <<"------------------------\n";
	cout <<"1 - adição\n";
	cout <<"2 - subtração\n";
	cout <<"3 - divisão\n";
	cout <<"4 - multiplicação\n";
	cout <<"Opção: ";
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
		cout <<"Opção Invalida!";
	}
}
