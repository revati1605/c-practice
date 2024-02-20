#include <stdio.h>
#include<string.h>

void main()
{
	char str1[20];
	int len,flag = 0,i;
	printf("Enter string:\n");
	scanf("%s",str1);
	len = strlen(str1);
	for(i=0;i<len/2;i++)
	{
		if(str1[i] != str1[len-i-1])
			flag = 1;
	}
	if(flag == 1)
		printf("String is not palindrome\n");
	else
		printf("String is palindrome\n");
	
}
