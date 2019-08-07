//A
//AB
//ABC
//ABCD
//ABCDE
#include<stdio.h>
#include<conio.h>
main()
{
int i,n,j;
printf("Enter the value of n = ");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",'A'+j-1);
		}
		printf("\n");
	}
getch();
}
