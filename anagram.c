#include<stdio.h>
#include<string.h>

void main()
{
	char st1[20],st2[30],temp;
	int len1,len2,i,j;
	printf("Enter string 1 and 2 :\n");
	scanf("%s%s",st1,st2);
	len1 = strlen(st1);
	len2 = strlen(st2);
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len1-i-1;j++)
		{
			if(st1[j]>st1[j+1])
			{
				temp = st1[j];
				st1[j]=st1[j+1];
				st1[j+1]=temp;
			}
			 if(st2[j]>st2[j+1])
                        {
                                temp = st2[j];
                                st2[j]=st2[j+1];
                                st2[j+1]=temp;
                        }

		}
	}
	for(i=0;i<len1;i++)
	{
		if(st1[i] != st2[i])
			printf("Strings are not anagram\n");
	}
	printf("Strings are anagram\n");
}
	
