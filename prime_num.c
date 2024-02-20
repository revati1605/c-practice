#include<stdio.h>
int main()
{
	int temp  , temp1=1,i,n;
	printf("Enter value for n :\n");
	scanf("%d",&n);
	printf("First %d prime numbers are:\n",n);
	while(temp1<=n)
	{
		temp = 0;
		for(i=2;i<=(temp1/2);i++)
		{
			if(temp1%i == 0)
			{
				temp = 1;
				break;
			}
		}
		if(temp == 0)
			printf("%d\n",temp1);
		temp1++;
	}
}

