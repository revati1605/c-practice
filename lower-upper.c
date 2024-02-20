#include<stdio.h>
void main()
{	
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	if(ch >= 'a' && ch <='z')
	{
		ch = ch - 32;
		printf("character:%c\n",ch);
	}
	else
	printf("enter character in lower case\n");
}

