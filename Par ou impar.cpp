#include <iostream>
#include <math.h>

using namespace std;

int main (){
	float num;
	cout <<"Informe um numero qualquer: ";
	cin >>num;
	do {
		if(num%2==0){
			cout <<"Este numero � par!"<< endl;
		}
		else {
			cout <<"Este numero � impar!"<< endl;
		}
		cout << "Informe um numero qualquer: ";
		cin >>num;
	}
	while(num!=-1);
}
