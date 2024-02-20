#include<stdio.h>
void main()
{
	int a[10],i,j,temp,n;
	n = sizeof(a)/sizeof(a[0]);
	printf("enter values:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Values you entered are :\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Array after sorting\n");
	   for(i=0;i<n;i++)
                printf("%d\n",a[i]);
}
