//EEEEE
//DDDD
//CCC
//BB
//A
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the value of n = ");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		for (j=1;j<=i;j++)
		{
			printf("%c",'A'-1+i);
		}
		printf("\n");
	}
return 0;
}

