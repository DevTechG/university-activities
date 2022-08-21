#include <stdio.h>
main (){
	int num, fat, i;
	for (i=1;i<=10;i++) {
		fat=1;
		for (num=1;num<=i;num++)
			fat*=num;
		printf("%d!= %d \n",i,fat);
	}
}
