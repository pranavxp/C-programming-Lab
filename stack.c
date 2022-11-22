#include <stdio.h>
#define n 3
int arr[n];
int top=-1;
void push(int item)
{	
	int i;
	if (top<n-1)
	{
		top++;
		arr[top]=item;
	}
	else 
	{
	printf("OVERFLOW\n\n");
	}
	printf("Current Stack is :\n");
	for(i=0;i<=top;i++)
	{
		
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
void pop()
{
	int item,i;
	if (top==-1)
	{
		printf("UNDERFLOW\n\n");
		printf("There is no item popped\n");
	}
	else
	{
		item=arr[top];
		top--;
		printf("The popped item is:%d \n\n",item);
		printf("Current Stack is :\n");
	}
	for(i=0;i<=top;i++)
	{
		
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
 
int main()
{
	int item,choice;
	do{
		printf("Options:\n 1. PUSH\n 2. POP \n 3. Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :	printf("Enter the item \n");
					scanf("%d",&item);
					push(item);
					break;
				 	
			case 2 :	pop();
					break;	
					
			case 3 :      break;	
			
			default:	printf("Choice does not exist\n\n"); 	
					break;	  
					
		}
		
	}while(choice!=3);
} 
