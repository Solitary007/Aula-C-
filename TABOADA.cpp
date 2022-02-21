#include <iostream>

using namespace std;

int main (){
	float num, res, contador;
	contador=0;
	cout <<"Qual o numero que você deseja saber a tabuada? ";
	cin >>num;
	
	while (contador<=10){
		res=num * contador;
		cout <<num <<" x " <<contador <<" = " <<res <<endl;
		contador++;
	}
}
