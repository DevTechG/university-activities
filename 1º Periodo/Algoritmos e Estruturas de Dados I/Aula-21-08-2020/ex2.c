#include <stdio.h>
main (){
	int num, pot, i;
	for (i=20;i<=50;i++) {
		pot=0;
			for (num=1;num<=i;num++)		
				pot+=(num*2)-1;
			printf("%d^2= %d \n",i,pot);
	}
}

