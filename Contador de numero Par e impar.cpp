#include <iostream>
using namespace std;
int main(){
	int userLim, num, cont, qtdP=0, qtdI=0;
	cout <<"A sequencia ira de 1 até? ";
	cin >>userLim;
	for(cont=1;cont<=userLim;cont++){
		cout <<"Digite o " <<cont <<"o. numero: ";
		cin >>num;
		if (num%2==0){
			qtdP++;
		}
		else {
			qtdI++;
		}
	}
	cout <<"Quantidade de numero pares!" <<qtdP<<endl;
	cout <<"Quantidade de numeros Impares!"<<qtdI<<endl;
}

