#include<stdio.h>
#include<ctype.h>

void main()
{
	int digit = 0,character = 0,special_char = 0,i;
	char st[20];
	printf("Enter string:\n");
	scanf("%[^\n]",st);
	for(i=0;st[i];i++)
	{
		if(isdigit(st[i]))
			digit++;
		else if (isalpha(st[i]))
			character++;
		else
		special_char++;
	
	}
	printf(" In string %d digits, %d characters and %d special characterare present\n",digit,character,special_char);
}

