//program to perform insertion sort
#include <stdio.h>
int main()
{
	int i,j,n,key;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);	
	int a[n];
	printf("Enter %d number elements\n",n);
	for(i=1;i<=n;i++)			//reading elements
	{
		scanf("%d",&a[i]);
	}
	for(j=2;j<=n;j++)			//sorting elements
	{
		key=a[j];
		i=j-1;
		while(i>0&&a[i]>key)		//loop condition checking
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
	printf("Sorted array is \n");		//elements are printed
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
