#include<stdio.h>
int main()
{
	//A
	//BB
	//CCC
	//DDDD.....
int i,j,n;
printf("Enter the value of n = ");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",'A'-1+i);
		}
		printf("\n");
	}
getch();
}
