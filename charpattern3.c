//AAAAA
//BBBB
//CCC
//DD
//E
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the value of n = ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=n;j>=i;j--)
		{
			printf("%c",'A'-1+i);
		}
		printf("\n");
	}
return 0;
}

