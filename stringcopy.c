#include<stdio.h>
void main()
{
	char ch1[30],ch2[30];
	int i;
	printf("enter string 1:\n");
	scanf("%s",ch1);
	for(i=0;ch1[i];i++)
		ch2[i] = ch1[i];
	printf("string 2 is %s\n",ch2);
}
