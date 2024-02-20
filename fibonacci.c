#include<stdio.h>
int main()
{
	int i,first =0,second=1,num,result;
	printf("enter range for fibonacci series:\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		if(i <= 1)
			result = i;
		else
		{
			result = first +second;
			first = second;
			second = result;
		}
		printf("%d \n",result);
	}
}

