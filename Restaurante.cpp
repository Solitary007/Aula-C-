#include <iostream>

using namespace std;

int main ()
{
	int nPedido, qtd, valor;
	valor=0;
	char *item;
	cout <<"*** Cardápio ***"<< endl;
	cout <<"100 – Hambúrguer – R$5,50"<<endl;
	cout <<"101 – Cachorro-quente – R$4,50"<<endl;
    cout <<"102 – Milkshake – R$7,00"<<endl;
    cout <<"103 – Pizza brotinho – R$8,00"<<endl;
    cout <<"104 - Cheeseburguer – R$8,50"<<endl;
    cout <<"Informe o código do seu pedido: "<<endl;
	cin >>nPedido;
	cout <<"Quantidade desejada: ";
	cin >>qtd;
	switch(nPedido){
		case 100:
		item="Hambúrguer";
		valor = qtd * 5.50;
		break;
		case 101:
		item="Cachorro-quente";
		valor=qtd *4.50;
		break;
		case 102:
		item="Milkshake";
		valor=qtd *7.00;
		break;
		case 103:
		item="Pizza brotinho";
		valor=qtd *8.00;
		break;
		case 104:
		item="Cheeseburguer";
		valor=qtd *8.50;
		break;
		default:
			cout <<"Pedido invalido!";
	}
	cout <<qtd <<" x " <<item <<" =R$ " <<valor;
		
}
