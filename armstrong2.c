#include<stdio.h>
main()
{

int x,sum=0,r,n;
printf("Enter the value of =");
scanf("%d",&x);
n=x;
while(n!=0)
{	r=n%10;
	sum=sum+r*r*r;
	n=n/10;
	;	
}
if(sum==x)
printf("%d is armstrong",x);
else
printf("%d is not armstrong",x);

return 0;
}

