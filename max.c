#include <stdio.h>
void main()
{
	int n1,n2,n3;
	printf("enter three number:\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2)
	{
		if(n1>n3)
			printf("%d is maximum number",n1);
		else

			printf("%d is maximum number",n3);
	}
	else if(n2>n3)
		printf("%d is maximum number",n2);
	else

			printf("%d is maximum number",n3);
}

