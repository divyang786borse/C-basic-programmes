#include<stdio.h>
int main()
{
int x,sum=0,r;
printf("Enter the value of n =");
scanf("%d",&x);
r=x;
while(r!=0)
{
	sum=sum*10;
	sum=sum+r%10;
	r=r/10;	
}
if(x==sum)
printf("%d is pallindrome",x);
else
printf("%d is not pallindrome",x);

return 0;
}
