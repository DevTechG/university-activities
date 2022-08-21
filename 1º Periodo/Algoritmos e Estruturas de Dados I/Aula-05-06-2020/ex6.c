#include <stdio.h>
main (){
	int x,ant2,ant1,num;
	x=1;
	ant2=1;
	ant1=0;
	num=0;
	while (x<15){
	if (num==0)
	printf("%d \n",num);	
	num=ant1+ant2;
	ant2=ant1;
   	ant1 =num;
   	if (num%2==0) {
 	printf("%d \n",num);
 	x=x+1;
	}
}
}
