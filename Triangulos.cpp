#include <iostream>

using namespace std;

int main (){
	float lad1, lad2, lad3;
	cout <<"Qual a medida do primeiro lado? ";
	cin >>lad1;
	cout <<"Qual a medida do segundo lado? ";
	cin >>lad2;
	cout <<"Qual a medida do terceiro lado? ";
	cin >>lad3;
	if(lad1==lad2 && lad2==lad3){
		cout <<"Esse triangulo � Equilatero!";
	}
	else if(lad1==lad2 || lad2==lad3 || lad3==lad1){
		cout <<"Esse triangulo � Escaleno.";
	}
	else {
		cout <<"Esse triangulo � is�celes.";
	}
}
