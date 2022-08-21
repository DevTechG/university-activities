#include <locale.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
	int a,b,*p1,*p2,**pd;
	cout << "Informe um valor inteiro: ";
	cin >> a;
	cout << "valor digitado é: "<<a<<"\n";
	p1=&a;
	pd=&p1;
	**pd*=2;
	cout << "O dobro do valor digitado é: "<< a<<"\n";
	system("pause");
    system("cls");
	cout << "Informe outro valor inteiro: ";
	cin >> b;
	cout << "valor digitado é: "<<b<<"\n";
	p2=&b;
	pd=&p2;
	**pd*=2;
	cout << "O dobro do valor digitado é: "<< b;
	return 0;
}