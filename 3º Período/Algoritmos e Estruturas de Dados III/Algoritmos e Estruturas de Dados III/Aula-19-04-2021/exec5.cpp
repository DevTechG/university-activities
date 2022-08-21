#include <locale.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
	float x,y,*p,**pd;
	cout << "Informe um valor inteiro: ";
	cin >> x;
	cout << "valor digitado é: "<<x<<"\n";
	p=&x;
	pd=&p;
	**pd*=4;
	cout << "O valor digitado quadriplicado é: "<< x<<"\n";
	system("pause");
    system("cls");
	cout << "Informe outro valor inteiro: ";
	cin >> y;
	cout << "valor digitado é: "<<y<<"\n";
	*pd=&y;
	**pd*=4;
	cout << "O valor digitado quadriplicado é: "<< y;
	return 0;
}