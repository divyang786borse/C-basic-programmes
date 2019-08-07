#include<stdio.h>
main()
{

int n,result=0,remainder,originalnumber;
printf("Enter the value of =");
scanf("%d",&n);
originalnumber=n;
while(originalnumber!=0)
{	remainder=originalnumber%10;
	result=result+remainder*remainder*remainder;
	originalnumber=originalnumber/10;
	;	
}
if(result==n)
printf("%d is armstrong",n);
else
printf("%d is not armstrong",n);

return 0;
}

