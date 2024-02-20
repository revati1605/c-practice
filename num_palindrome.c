#include<stdio.h>
int main()
{
	int num,num1,temp,result = 0;
	printf("enter number:\n");
	scanf("%d",&num);
	num1 = num;
	while(num != 0)
	{
		temp = num%10;
		result = result * 10 + temp;
		num = num/10;
	}
	if(result == num1)
		printf("%d is palindrome\n",num1);
	else
		printf("%d is not palindroe\n",num1);
}
