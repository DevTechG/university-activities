#include <stdio.h>
#include <time.h>
main (){
	int a[20],b[20],i,cont;
	cont=0;
	srand((unsigned)time(NULL));
	for (i=0;i<=19;i++)
		a[i]=rand()%100+1;
	for (i=0;i<=19;i++) {
		if (a[i]%2==0) {
		b[cont]=a[i];	
		cont++;
		}
	}
	for (i=0;i<=19;i++) {
		if (a[i]%2==1) {
		b[cont]=a[i];	
		cont++;
	}
}
	for (i=0;i<=19;i++){
		a[i]=b[i];
		printf("%d\n",a[i]);
}
}
	

