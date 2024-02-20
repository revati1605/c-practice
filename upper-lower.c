#include<stdio.h>
void main()
{	
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	if(ch >= 'A' && ch <='Z')
	{
		ch = ch + 32;
		printf("character:%c\n",ch);
	}
	else
	printf("enter character in upper case\n");
}

