#include <stdio.h>
main(){
	float n1,n2,n3;
	printf("Digite tres numeros aleatorios: ");
	scanf("%f%f%f",&n1,&n2,&n3);
	if (n1+n2>n1+n3)
		{
			if (n1>n2)
				printf("%0.1f",n1);
			else
				printf("%0.1f",n2);
		}
		else
			{
				if (n1>n3)
					printf("%0.1f",n1);
				else
					printf("%0.1f",n3);
			}
}

