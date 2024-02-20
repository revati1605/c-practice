#include<stdio.h>
void main()
{
	int num;
	printf("Enter number:\n");
	scanf("%d",&num);
	printf("number after remove last set bit is :%d\n",(num&(num-1)));
}
