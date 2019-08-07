#include<stdio.h>
int main()
{
	int array[10];
int even[5]={0,2,4,6,8};
int odd[5]={1,3,5,7,9};
int loop,index,elen,olen;
elen=olen=5;
index=0;
for(loop=0;loop<elen;loop++)
{array[index]=even[loop];
index++;
}

for(loop=0;loop<olen;loop++)
{array[index]=odd[loop];
index++;
}
printf(" Even   ->");
for(loop=0;loop<elen;loop++)
printf("%d",even[loop]);

printf(" \nodd   ->");
for(loop=0;loop<olen;loop++)
printf("%d",odd[loop]);

printf("\n Concatenate   ->");
for(loop=0;loop<10;loop++)
printf("%d",array[loop]);
return 0;
}
