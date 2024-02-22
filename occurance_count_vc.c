#include<stdio.h>

void main()
{
	char st[20];
	int i,j,vowels = 0,consonant = 0;
	printf("enter string:\n");
	scanf("%[^\n]",st);
	for(i=0;st[i] != 0;i++)
	{
		 if (st[i]=='a' || st[i]=='A' || st[i]=='e' || st[i]=='E' || st[i]=='i' || st[i]=='I' || st[i]=='o' || st[i]=='O' || st[i]== 'u' || st[i]=='U')
			 vowels++;
		 else
			 consonant++;
	}
	printf("In string %d vowels and %d consonant are present\n",vowels,consonant);
}

