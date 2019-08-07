//E
//DE
//CDE
//BCDE
//ABCDE
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the value of n = ");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		for (j=i;j<=n;j++)
		{
			printf("%c",'A'-1+j);
		}
		printf("\n");
	}
return 0;
}

