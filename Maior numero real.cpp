#include <iostream>
using namespace std;
int main (){
	int num, cont, maior=0;
	for(cont=1;cont<=15;cont++){
		cout <<"Informe o " <<cont <<"o. numero: ";
		cin>>num;
		if (num>maior) {
			maior=num;
		}
	}
	cout <<"O maior numero informado foi " << maior;
}

