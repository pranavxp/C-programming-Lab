//program for linear search
#include <stdio.h>
int main()
{

	int arr[50],n,i,x,c,flag=0;
	c++;
	printf("Enter the number of elements of the array \n");
	c++;
	scanf("%d",&n);
	c++;
	printf("Enter the elements of the array \n");	   
	c++;   //reading the elements of the array
	for(i=0;i<n;i++,c++)
		{
		scanf("%d",&arr[i]);
		c++;
		}
	printf("Enter the element x to be searched\n");
	c++;
	scanf("%d",&x);	
	c++;	
	for(i=0;i<n;i++,c++)
		if(arr[i]==x)			    	 //condition checking
		{	flag=1;			 //flag becomes 1
			c++;			    	//breaking from the loop
			break;		
			c++;		  	   
		}	
	if(flag==1)					//condition checking
	{	
		c++;				     
		printf("The element x = %d is found at index i = %d \n",x,i);	// element location is displayed
		c++;
	}				
	else 
	{	
		c++;
		printf("element is not found\n");
		c++;
	}	
	printf("The space complexity of the program is %ld\n",sizeof(int)*n+16);	
	printf("Time complexity is %d\n",c);
				
}
