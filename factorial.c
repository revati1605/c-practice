#include<stdio.h>
void main()
{
	int num,factorial = 1,i;
	printf("Enter number:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		factorial *= i;
	printf("Factorial of %d is :%d\n",num,factorial);
}
