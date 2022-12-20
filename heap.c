//program to perform heap sort
#include <stdio.h>
void maxheapify(int arr[],int n, int i)
{	int largest,l,r,temp;
	largest = i;
	l = 2*i+1;
	r=2*i+2;
	if((l<n) && (arr[l]>arr[largest]))
		largest = l;
	if((r<n) && (arr[r]>arr[largest]))
		largest=r;	
	if (largest!=i)
	{
		temp=arr[i];
		arr[i]=arr[largest];
		arr[largest]=temp;
		maxheapify(arr,n,largest);	
	}
}

void heapsort(int arr[],int n)
{
	int i,temp;
	for(i=(n/2)-1;i>=0;i--)
		maxheapify(arr,n,i);
	for(i=n-1;i>=0;i--)
	{
		int temp=arr[i];
		arr[i]=arr[0];
		arr[0]=temp;
		maxheapify(arr,i,0);
	}
}
void display(int arr[],int n)
{
 	int i;
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);	
	}
}

int main()
{
	int n,i;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	printf("The array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);	
	}
	heapsort(arr,n);
	display(arr,n);
}
