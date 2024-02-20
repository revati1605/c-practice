#include<stdio.h>
void main()
{
	char ch1[30],temp;
	int len=0,i,j;

	printf("enter string:\n");
	scanf("%[^\n]",ch1);
	for(i=0;ch1[i];i++)
		len++;
/*	for(i=0;i<len/2;i++)
	{
		temp=ch1[i];
	ch1[i]=ch1[len-i-1];
	ch1[len-i-1]=temp;
	}*/
	for(i=0,j=len-1;i<j;i++,j--)
	{
		temp = ch1[i];
		ch1[i]=ch1[j];
		ch1[j]=temp;
	}

	printf("After reverse:%s\n",ch1);
}
