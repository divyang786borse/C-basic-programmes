#include<stdio.h>
int main()

{
	int i,j,n;
	printf("Enter number = ");
	scanf("%d",&n);
	//iterate through upper half triangle//
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=(i*2-1);j++)
		{
			printf("%d",j);
		}
	printf("\n");
	}
	//iterate through lower half triangle//
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=(i*2-1);j++)
		{
			printf("%d",j);
		}
	printf("\n");
	}
	return 0;
}
