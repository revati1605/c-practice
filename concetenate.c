#include <stdio.h>
#include <string.h>

void main()
{
	char str1[20],str2[20];
	int i,len ;
	printf("Enter string 1 and string 2:\n");
	scanf("%s",str1);
	scanf("%s",str2);
/*	for(i=0;str1[i] != '\0';i++)
		len++;*/

	len = strlen(str1);
	for(i=0;str2[i] != '\0';i++)
		str1[i+len]=str2[i];

	printf("After concetenation:%s\n",str1);
}
