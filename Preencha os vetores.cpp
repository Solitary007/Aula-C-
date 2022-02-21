#include<iostream>

using namespace std;

int main(){
	int ind, cont1=0, cont3=0,cont5=0, sort[10];
	for (ind=0;ind<=9;ind++){
		cout <<"Informe a face sorteada"<<ind+1<<"a. vez: ";
		cin >> sort[ind];
	}
	for(ind=0;ind<=19;ind++){
		switch(sort[ind]){
			case 1:
				cont1++;
			break;
			case 3:
				cont3++;
			break;
			case 5:
				cont5++;
			break;
		}
	}
	cout <<"A face 1 foi sorteada" <<cont1 <<"vezes.\n";
	cout <<"A face 3 foi sorteada" <<cont3 <<"vezes.\n";
	cout <<"A face 5 foi sorteada" <<cont5 <<"vezes.\n";
}
