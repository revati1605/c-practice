#include<stdio.h>
#include<math.h>
//#include<conio.h>
int main()
{
	int num,n,num1,temp,result=0,i=0;
	printf("enter number:\n");
	scanf("%d",&num);
	num1 = num;
	temp = num;
	while(num != 0)
	{
		num =num/10;
		i++;
	}
	while(num1 != 0)
	{
		n = num1 % 10;
		result = result +pow(n,i);
		num1 = num1/10;
	}
	if(temp == result)
	{
		printf("%d is armstrong number\n",temp);
	}
	else
		printf("%d is not armstrong number\n",temp);
}
