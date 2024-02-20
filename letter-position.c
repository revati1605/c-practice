#include<stdio.h>
void main()
{
	char ch;
	printf("enter character:\n");
	scanf("%c",&ch);
	printf("position is %d\n",ch&31);
}
