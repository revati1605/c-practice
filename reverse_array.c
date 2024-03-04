#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,4,5},n,i,j,temp;
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp = arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("After reverse\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
}

