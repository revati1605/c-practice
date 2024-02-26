#include <stdio.h>

void main()
{
	int n=1,i;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int arr[n];
	int occ[100]={0};
	printf("Enter values in array:\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d\n",&arr[i]);
		occ[arr[i]]++;
	}
	printf("Repeated numbers :\n");
	for(i=1;i<n;i++)
		printf("%d is repeated %d times\n",i,occ[i]);
}

