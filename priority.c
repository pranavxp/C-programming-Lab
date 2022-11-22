#include <stdio.h>
#define n 3
int rear = -1, front=-1, pqueue[n];
void enqueue(int item)
{
	int i;
	if(rear == n-1)
		printf("Queue element overflow\n\n");
	else if (front==-1 && rear==-1)
	{	
		front=rear=0;
		pqueue[rear]=item;
	}	
	else
	{
		rear++;
		i=rear-1;
		while((i>=0)&&(pqueue[i]>item))
		{
			pqueue[i+1]=pqueue[i];
			i--;
		}
		pqueue[i+1]=item;
	}	
	printf("The current queue is :\n");
	for (i=0;i<=rear;i++)
	{
		printf("%d\t",pqueue[i]);
	}
	printf("\n");
}
void dequeue()
{	
	int item,i;
	if (front==-1)
	{
		printf("Queue underflow due to absence of any elements\n\n");
		printf("No element is dequeued\n");
	}	
	else if (front>rear)
	{
		printf("Queue underflow due to removal of all elements\n\n");
		front=-1;
		rear=-1;
		printf("No element is dequeued\n");
	}	
	else
	{
		item = pqueue[front];
		front++;
		printf("The current queue is :\n");
		for (i=front;i<=rear;i++)
		{
			printf("%d\t",pqueue[i]);
		}
		printf("\n");
	}
}
void main()
{
	int item,choice;
	do{
		printf("Options For Priority Queue:\n 1. ENQUEUE\n 2. DEQUEUE \n 3. Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :	printf("Enter the item \n");
					scanf("%d",&item);
					enqueue(item);
					break;
				 	
			case 2 :	dequeue();
					break;	
					
			             
			case 3 :      break;	
			
			
			default:	printf("Choice does not exist\n\n"); 	
					break;	  
					
		}
		
	}while(choice!=3);
}
