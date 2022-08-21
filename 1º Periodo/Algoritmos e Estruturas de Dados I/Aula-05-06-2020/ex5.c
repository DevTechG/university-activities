#include <stdio.h>
main (){
	int x,ant2,ant1,num;
	x=0;
	ant2=1;
	ant1=0;
	num=0;
	for (x=0;x<14;x++) {
	if (num==0)
	printf("%d \n",num);	
	num=ant1+ant2;
	ant2=ant1;
   	ant1 =num;
 	printf("%d \n",num);
	}
}
