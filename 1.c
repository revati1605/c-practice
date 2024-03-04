#include<stdio.h>
#include<stdlib.h>

struct st
{
	double d;
	int s;
	char c;
}st1;

void main()
{
/*	int var1 = 100;
	const int *ptr = &var1;
	*ptr = 10;
	printf("%d\n",*ptr);*/
/*	const int x =10;
	int y = x;
	int *ptr = NULL;
	ptr =&x;
	(*ptr)++;
	printf("%d %d",x,y);
	ptr = &y;
	(*ptr)++;
	printf("%d %d",x,y);*/
	char *ptr;
	if((ptr = (char*)malloc(0))==NULL)
printf("a");
	else
		printf("b");
	int a[2][2]={1,2,3,4};
	printf("&a=%ld\n",&a);
	printf("%ld\n",a[0][1]);
	printf("&a+1=%ld\n",&a+1);
	printf("%d\n",a[1][0]+1);

}

