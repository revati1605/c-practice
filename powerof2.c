#include<stdio.h>
int main()
{
	int num;
	printf("enter num:\n");
	scanf("%d",&num);
	if(num &(num -1))
		printf("%d is not power of 2 \n",num);
	else
		printf("%d is  power of 2\n",num);
}
