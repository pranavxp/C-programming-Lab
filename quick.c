//program to implement quick sort
#include <stdio.h>
int partition(int arr[],int lb,int ub)
{
 	int end, pivot, start,temp;
	pivot=lb;
	start=lb;
	end=ub;
	while(start<end)
	{
		while(arr[start]<=arr[pivot] && start<ub)
		{
			start++;
		}
		while(arr[end]>arr[pivot])
		{
			end--;
		}
		if (start<end)
		{
			temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
		}	
	}
	temp=arr[pivot];
	arr[pivot]=arr[end];
	arr[end]=temp;
	return end;
}

void quick(int arr[],int lb,int ub)
{
	int loc,i;
	if (lb<ub)
	{
		loc=partition(arr,lb,ub);
		quick(arr,lb,loc-1);
		quick(arr,lb+1,ub);
	}
	
}


int main()
{
	int n,i;
	printf("Enter the number of elements of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the values of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The entered array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	quick(arr,0,n-1);
	printf("The sortred array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	
}


