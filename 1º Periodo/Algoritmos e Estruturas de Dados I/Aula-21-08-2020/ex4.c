#include <stdio.h>
#include <time.h>
main (){
	int a[5],b[5],i;
	srand((unsigned)time(NULL));
		for (i=0;i<=4;i++) {
			a[i]=rand()%10;
			b[i]=a[i];
			printf("%d\n",b[i]);
	}	
}

