#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct Coordenada {
	int x, y, z;
};

int main (){
	setlocale(LC_ALL,"Portuguese");
	Coordenada ponto[3];

		
	ponto[0].x=10;
	ponto[0].y=20;
	ponto[0].z=50;
	
	cout<<"Coordenada X: "<<ponto[0].x<<endl;
	cout<<"Coordenada Y: "<<ponto[0].y<<endl;
	cout<<"Coordenada Z: "<<ponto[0].z<<endl<<endl;
	
	ponto[1].x=33;
	ponto[1].y=44;
	ponto[1].z=66;
	
	cout<<"Ponto 2\n";
	cout<<"Coordenada X: "<<ponto[1].x<<endl;
	cout<<"Coordenada Y: "<<ponto[1].y<<endl;
	cout<<"Coordenada Z: "<<ponto[1].z<<endl<<endl;
	
	ponto[2].x=4;
	ponto[2].y=7;
	ponto[2].z=9;
	
	cout<<"Ponto 3\n";	cout<<"Coordenada X: "<<ponto[2].x<<endl;
	cout<<"Coordenada Y: "<<ponto[2].y<<endl;
	cout<<"Coordenada Z: "<<ponto[2].z<<endl<<endl;
	
	system("pause");
	return 0;
}
