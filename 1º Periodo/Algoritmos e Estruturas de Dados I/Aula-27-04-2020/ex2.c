#include <stdio.h>
main(){
	float sal,n_sal;
	printf("Digite o sala¡rio do  funciona¡rio: ");
	scanf("%f",&sal);
	if (sal<=300)
		n_sal=sal*1.35;
		else
			n_sal=sal*1.15;
	printf("O novo sala¡rio é %0.2f",n_sal);
}
