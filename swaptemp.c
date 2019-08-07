#include<stdio.h>
int main()
{//swapping with third variable
	int x,y,temp;
	printf("Enter two integers = \n");
	scanf("%d%d",&x,&y);
	
	printf("Before swapping \n First integer = %d\n Second integer = %d\n",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("After swapping \n First integer =%d \n Second integer = %d\n",x,y);
	return 0;
	
}
