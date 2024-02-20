#include<stdio.h>
void main()
{
	int n,j;
	printf("enter number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		j = n%10;
		if(j != 0 && j != 1)
		{
			printf("Given number is not binary");
			break;
		}
		n = n/10;
		if(n == 0)
		printf("Given number is binary\n");
	}
}
