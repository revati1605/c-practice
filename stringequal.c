#include<stdio.h>
void main()
{
	char str1[20],str2[20];
	int j,flag = 0;
	printf("enter string 1:\n");
	scanf("%s",str1);
	printf("enter string 2:\n");
	scanf("%s",str2);
	for(j=0;str1[j]!='\0'|| str2[j]!='\0';j++)
	{
		if(str1[j]!=str2[j])
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		printf("strings are equal\n");
	else
		printf("strings are not equal\n");
}
