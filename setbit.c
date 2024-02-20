#include<stdio.h>
int main()
{
	int num,pos;
	printf("enter number\n");
	scanf("%d",&num);
	printf("position which you want to set\n");
	scanf("%d",&pos);
	num = num |(1<<pos);
	printf("After seeting bit num is:%d\n",num);
}

