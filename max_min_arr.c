#include<stdio.h>
void main()
{
	int arr[10],i,min,max,n;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf("Enter element in array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Entered array is:\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
	max=min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
		else if(arr[i]<min)
			min = arr[i];
	}
	printf("maximum elemnet:%d\n minimum element:%d\n",max,min);
}

