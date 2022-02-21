#include <iostream>

using namespace std;

int main(){
	int numMes;
	char*escExtenso;
	bool invalido=false;
	cout <<"Informe o numero do mês: ";
	cin >>numMes;
	switch(numMes){
		case 1:
			escExtenso="Janeiro.";
			break;
		case 2:
			escExtenso="Fevereiro.";
			break;
		case 3:
			escExtenso="Março.";
			break;
		case 4:
			escExtenso="Abril.";
			break;
		case 5:
			escExtenso="Maio.";
			break;
		case 6:
			escExtenso="Junho.";
			break;
		case 7:
			escExtenso="Julho.";
			break;
		case 8:
			escExtenso="Agosto.";
			break;
		case 9:
			escExtenso="Setembro.";
			break;
		case 10:
			escExtenso="Outubro.";
			break;
		case 11:
			escExtenso="Novembro.";
			break;
		case 12:
			escExtenso="Dezembro.";
			break;
		default:
			cout <<"Mês inválido!!!";
			invalido=true;			
	}
	if (!invalido){
		cout <<"O Numero "<<numMes <<" equivale ao mes de "<<escExtenso ;
	}
}
