#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x, y;
	x=10;
	y=20;
	cout<<"Coordenada X: "<<x<<endl;
	cout<<"Coordenada Y: "<<y<<endl;

	system("pause");
	return 0;
}
