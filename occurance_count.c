#include<stdio.h>
#include<string.h>

void main()
{
	int count = 0,len,i;
	char st[20],ch;
	printf("enter string:\n");
	scanf("%s",st);
	printf("Enter character to find occurance:\n");
	scanf(" %c",&ch);
	len = strlen(st);
	for(i=0;i<len;i++)
	{
		if(st[i] == ch)
			count++;
	}
	printf("%c character occurance count is :%d\n",ch,count);
}
