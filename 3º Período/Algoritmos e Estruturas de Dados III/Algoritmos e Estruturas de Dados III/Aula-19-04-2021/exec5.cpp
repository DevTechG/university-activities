#include <locale.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
	float x,y,*p,**pd;
	cout << "Informe um valor inteiro: ";
	cin >> x;
	cout << "valor digitado �: "<<x<<"\n";
	p=&x;
	pd=&p;
	**pd*=4;
	cout << "O valor digitado quadriplicado �: "<< x<<"\n";
	system("pause");
    system("cls");
	cout << "Informe outro valor inteiro: ";
	cin >> y;
	cout << "valor digitado �: "<<y<<"\n";
	*pd=&y;
	**pd*=4;
	cout << "O valor digitado quadriplicado �: "<< y;
	return 0;
}