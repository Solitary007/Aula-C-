#include <iostream>

using namespace std;

int main(){
	float ida;
	cout <<"Informe sua idade para cadastro de categoria: ";
	cin >>ida;
	
	if(ida>=7 && ida<=12) {
		cout <<"Voc� est� cadastrado na categoria infantil!";
	}
	else if(ida>=13 && ida<=17){
		cout <<"Voc� est� cadastrado na categoria juvenil!";
	}
	else if(ida>=18 && ida<=49){
		cout <<"Voc� est� cadastrado na categoria adulto";
	}
	else if(ida>=50){
		cout <<"Voc� est� cadastrado na categoria senior!";
	}
	else{
		cout <<"N�o pode participar!!!";
	}
}
