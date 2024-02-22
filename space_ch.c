#include<stdio.h>
void main()
{
	char ch,st[10];
	int i;
	printf("Enter string:\n");
	scanf("%[^\n]",st);
	getchar();
	printf("Enter character which you want to replace if space is there:\n");
	scanf("%c",&ch);
	for(i=0;st[i];i++)
	{
		if(st[i] == ' ')
		{
			st[i] = ch;
		}
	}
	printf("String after replace space is:%s\n",st);
}

