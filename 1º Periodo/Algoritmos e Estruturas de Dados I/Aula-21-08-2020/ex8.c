#include <stdio.h>
#include <time.h>
main (){
	int a[10],i,aux,bln;
	srand((unsigned)time(NULL));
		for (i=0;i<=9;i++)
			a[i]=rand()%100;
    do {
        bln=0;        
    	for(i=0;i<=9;i++) {
            if(a[i]>a[i+1]) {
                bln=1;
                aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
            }
        }
    } while (bln!=0);
    	for (i=0;i<=9;i++)
		printf("%d\n",a[i]);
}

