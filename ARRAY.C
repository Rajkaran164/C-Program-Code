//Program to calculate the second largest element without using sorting
#include<stdio.h>
int main()
{
	int arr[10],n;
	int i,m,max=0;
	printf("\nEnter the size of array :");
	scanf("%d",&n);
	m=0;
	printf("\nEnter the %d element : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[m]<arr[i]&&i!=0)
		{
			m=i;
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[max]<arr[i] && i!=m && i!=0)
		{
			max=i;
		}
	}
	printf("\nSecond Largest number is %d",arr[max]);
	return 0;
}
