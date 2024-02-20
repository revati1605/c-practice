#include<stdio.h>
int main()
{
	int a[]={1,1,2,5,3,2,3,4,7,4};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i = 0;i<n;i++)
	{
		int cnt = 0;
		for(int j =0;j<n;j++)
		{
			if(a[j] == a[i])
				cnt++;
		}
		if(cnt == 1)
			printf("%d ",a[i]);
	}
}
