#include<stdio.h>

void main()
{
	char st[20];
	int i,j;
	printf("Enter string:\n");
	scanf("%s",st);
	for(i=0;st[i] != 0 ;i++)
	{
		 if (st[i]=='a' || st[i]=='A' || st[i]=='e' || st[i]=='E' || st[i]=='i' || st[i]=='I' || st[i]=='o' || st[i]=='O' || st[i]== 'u' || st[i]=='U')
		 {
			 for(j=i;st[j];j++)
				 st[j] = st[j+1];
				 i--;
		 }
	}
	printf("After removing vowels :%s\n",st);
}
