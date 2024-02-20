#include<stdio.h>
int main()
{
	int num,pos;
	printf("enter number\n");
	scanf("%d",&num);
	printf("enter position which you want to check\n");
	scanf("%d",&pos);
	if((num & (1<<pos)) == 0)
		printf("bit is clear\n");
	else
		printf("bit set\n");
}
