//program for selection sort
#include <stdio.h>
int main()
{	
	int min,n,i,j,temp;
	printf("Enter the number of elements\n"); 
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)				//reading the array
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<=n-1;i++)				//sorting the elements
	{
		min=i;
		for(j=i+1;j<=n;j++)
		{
			if(a[j]<a[min])			//condition checking
			{
				min=j;
				
			}				
		}	
			if (min!=i)			//condition checking
			{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
			}
	}
	printf("The sorted array is \n");		//sorted array is printed
		for(i=0;i<n;i++)
		{
			printf("%d \t",a[i]);
		}
		
}	
