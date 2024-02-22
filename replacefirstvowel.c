#include<stdio.h>

void main()
{
        char st[20];
        int i,j;
        printf("enter string:\n");
        scanf("%[^\n]",st);
        for(i=0;st[i] != 0;i++)
        {
                 if (st[i]=='a' || st[i]=='A' || st[i]=='e' || st[i]=='E' || st[i]=='i' || st[i]=='I' || st[i]=='o' || st[i]=='O' || st[i]== 'u' || st[i]=='U')
		 {
			st[i] = '-';
		 	break; //comment this if you want remove all vowels
		 }
	}
	printf("After removing first vowel with '-'string is:%s\n",st);
}
