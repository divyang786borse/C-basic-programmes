#include<stdio.h>
int main()
{
	char s[1000], r[1000];
	int begin,end,count=0;
	printf("Enter a string = ");
	gets(s);
	
	//calculating string length
	
	while(s[count]!='\0')
		count++;
		
	end=count-1;
	
	for(begin=0;begin<count;begin++)
	{
		r[begin]=s[end];
		end--;
	}
	r[begin]='\0';
	
	printf("%s\n",r);
	
	return 0;
}
