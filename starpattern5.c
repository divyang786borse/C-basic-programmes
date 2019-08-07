#include <stdio.h>
#include <conio.h>
main()
{
//equilateral triangle of 1,3,5,7,9//
int i,j;
for(i=1;i<=5;i++)
{
	for (j=1;j<=9;j++)
	{
		if(j>=6-i&&j<=4+i)
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
}
getch();
}
