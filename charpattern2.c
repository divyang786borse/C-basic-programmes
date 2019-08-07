//A
//BA
//CBA
//DCBA
//EDCBA
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the value of n = ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=i;j>=1;j--)
		{
			printf("%c",'A'-1+j);
		}
		printf("\n");
	}
return 0;
}

