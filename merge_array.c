#include <stdio.h>

void main()
{
	int arr1[50],arr2[50],arr3[50],s1,s2,s3,i,j,temp;
	printf("Enter size for arr1 and arr2:\n");
	scanf("%d%d",&s1,&s2);
	s3=s1+s2;
	printf("Enter elements for arr1 and arr2:\n");
	for(i=0;i<s1;i++)
		scanf("%d",&arr1[i]);
	for(i=0;i<s2;i++)
		scanf("%d",&arr2[i]);
	for(i=0;i<s1;i++)
		arr3[i]=arr1[i];
	for(j=0;j<s2;j++)
	{
		arr3[i]=arr2[j];
		i++;
	}

	for(i=0;i<s3;i++)
	{
		for(j=0;j<s3-1;j++)
		{
			if(arr3[j]>arr3[j+1])
			{
				temp = arr3[j+1];
				arr3[j+1] = arr3[j];
				arr3[j] = temp;
			}
		}
	}
	printf("ARRAY3:\n");
	for(i=0;i<s3;i++)
		printf("%d\n",arr3[i]);
}

