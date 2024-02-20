#include<stdio.h>
void main()
{
	int num,count = 0;
	printf("enter number:\n");
	scanf("%d",&num);
	while(num)
	{
		num &= (num-1);
		count++;
	}
	printf("set bits are:%d\n",count);
}
