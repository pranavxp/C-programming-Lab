//program to perform binary search
#include <stdio.h>
int main()
{
	int first=0,last,mid,n,i,search,c,flag=0;
	c++;
	printf("Enter the number of elements in the array\n");
	c++;
	scanf("%d",&n);	
	c++;				//upper limit of array is read
	last = n-1;
	c++;
	int arr[n];
	c++;
	printf("Enter %d number of sorted elements\n",n);
	c++;
	for(i=0;i<n;i++,c++)
	{
		scanf("%d",&arr[i]);
		c++;
	
	}
	printf("Enter the element to be searched\n");
	c++;
	scanf("%d",&search);
	c++;
	mid=(first+last)/2;
	c++;	
	while(first<=last)
	{
		if (arr[mid]==search)
		{	
			c++;
			flag=1;		
			c++;			//flag value is set to 1
			break;
			c++;
		}
		else if (arr[mid]<search)
		{
			c++;
			first=mid+1;
			c++;
		}
		else
		{
			c++;
			last=mid+1;
			c++;
		}
		mid = (first+last)/2;           
	}
	c++;
	
	if(flag==1)						//flag count condition is checked
		{
			c++;
			printf("Element %d found at index %d\n",search,mid );
			c++;
		
		}
	else if(flag==0)
		{
			c++;
			printf("Element not found! \n");
			c++;
		}
	printf("Time complexity is %d\n",c);
	printf("Space complexity is %d\n",(4*n+7));
}
