#include <iostream>

using namespace std;

int main() {
	float hora;
	cout <<"Que horas são? ";
	cin >> hora;
	if(hora>=6 && hora<=18){
		cout <<"Está de dia!";
	}
	else {
		cout <<"Está de noite!";
	}
}
