#include <iostream>

using namespace std;

int main() {
	float hora;
	cout <<"Que horas s�o? ";
	cin >> hora;
	if(hora>=6 && hora<=18){
		cout <<"Est� de dia!";
	}
	else {
		cout <<"Est� de noite!";
	}
}
