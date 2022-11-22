//program for bubble sort
#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)			//sorting the elements
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])		//checking condition for sorting
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}	
	}
	printf("The sorted elements are \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}	
