#include<stdio.h>
void main()
{
	int num,remainder,i,sum=0;
	printf("enter number:\n");
	scanf("%d",&num);
	for(i=1;i<=num/2;i++)
	{
		remainder = num % i;
		if(remainder == 0)
			sum = sum + i;
	}
	if(sum == num)
		printf("%d is perfect number\n",num);
	else
		printf("%d is not perfect number\n",num);
}
