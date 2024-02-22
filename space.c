#include<stdio.h>
#include<string.h>
void main()
{
	char st[20];
	int i,j,len;
	printf("Enter string\n");
	scanf("%[^\n]",st);
	len = strlen(st);
	for(i=0;i<len;i++)
	{
		if(st[i] == ' ')
		{
			for(j =i;j<len;j++)
				st[j] = st[j+1];
			len--;
			i--;
		}
	}
	printf("After removing spaces string is %s\n",st);
}
