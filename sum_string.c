#include <stdio.h>
#include <ctype.h>
#include <string.h>
void main()
{
	char st[256];
	int i,sum = 0,len;
	printf("Enter string:\n");
	scanf("%[^\n]",st);

	len = strlen(st);
	for(i=0;i<len;i++)
	{
		if(isdigit(st[i]))
		{
			sum =sum + st[i]-'0';
		}
	}
	printf("Sum is %d\n",sum);
}
