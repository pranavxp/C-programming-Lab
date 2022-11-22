#include <stdio.h>
#define n 3
int rear = -1, front = -1, item, queue[n];
void enqueue()
{
    if (front==-1 && rear==-1){
      front = rear = 0;
      printf("\nEnter the value to Enqueue\n");
      scanf("%d",&item);
      queue[rear] = item;
    }
    else if ((rear+1) % n == front)
        printf("\nCircular Queue Full\n");   
    else{
         rear = (rear+1) % n;
         printf("\nEnter the value to Enqueue\n");
         scanf("%d",&item);
         queue[rear] = item;
        }
}
void dequeue()
{
    if (front==-1 && rear==-1)
        printf("Circular Queue Empty\n");
    else if (front == rear){
        printf("Item Removed is : %d\n",  queue[front]);
        rear = front = -1;
    }
    else
    {
        printf("\nItem Removed is : %d\n",  queue[front]);
        front = ( front+1) % n;
    }
}
void display()  
{  
    int i;
    if(front == -1 && rear == -1)  
    {  
        printf("Circular Queue is empty\n.");  
    }  
    else{
            while(front != rear)  
            {  
                printf("%d \t", queue[front]);  
                front=(front+1) % n;  
            }
            printf("%d\t", queue[front]);
        }
    
}  
int main()
      {
      int choice;
      printf("Circular Queue Options are\n");
            do {
                  printf("1.Enqueue\n2.Dequeue\n3.Display Queue\n4.Exit\n");
                  printf("Select any options ");
                  scanf("%d",&choice);
                  switch (choice)
                  {
                        case 1: enqueue();
                                    break;
                        case 2: dequeue();
                                    break;
                        case 3: display();
                                    break;
                        default: choice=0;
                                    break;
                  }
              }while (choice!=0);
}
