#include<stdio.h>
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return(n*fact(n-1));

}
void main()
{
	int num;
	printf("Enter number:\n");
	scanf("%d",&num);
	printf("Factorial of %d is : %d\n",num,fact(num));
}
