#include<stdio.h>
void main()
{
	char str1[20],ch;
	int i,j;
	printf("enter string\n");
	scanf("%s",str1);
	printf("enter character:\n");
	scanf(" %c",&ch);
	for(i=0;str1[i];i++)
	{
		if(str1[i] == ch)
		{
			for(j=i;str1[j];j++)
				str1[j] = str1[j+1];
				i--;
		}
	}
	printf("After removal of char string is  : %s\n",str1);
}
