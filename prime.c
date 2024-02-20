#include<stdio.h>
int main()
{
	int num,temp = 0,n,i=0;
	printf("enter a number:\n");
	scanf("%d",&num);
	for( i=2;i<=(num/2);i++)
	{
		if(num%i==0)
		{
			temp =1;
			break;
		}
	}

	if(temp ==1 )
		printf("given number is not prime\n");
	else
		printf("given number is prime number\n");
}
