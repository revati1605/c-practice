#include<stdio.h>

void main()
{
	char st[20];
	int i;
	printf("Enter string:\n");
	scanf("%[^\n]",st);
	printf("String characters are:\n");
	while(st[i] != '\0')
		printf("%c\n",st[i++]);
}
