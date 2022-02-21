#include <iostream>

using namespace std;

int main(){
	float qEntrevistados, sPesos, sIdades, idade;
	double peso, mPesos, mIdades;
	qEntrevistados=0;
	sPesos=0;
	sIdades=0;
	cout <<"Qual o peso do entrevistado? ";
	cin >>peso;
	while(peso!=0){
		cout <<"Qual a idade do entrevistado? ";
		cin >>idade;
		qEntrevistados++;
		sPesos+=peso;
		sIdades+=idade;
		cout <<"Qual o peso do entrevistado? ";
		cin >>peso;
	}
	mPesos=sPesos/qEntrevistados;
	mIdades=sIdades/qEntrevistados;
	cout <<"Foram entrevistados "<<qEntrevistados<<" pessoas.\n";
	cout <<"A media das idades é "<<mIdades<<"\n";
	cout <<"A media de Peso é "<<mPesos<<"\n";
}
