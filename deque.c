#include <stdio.h>
#define n 3
int rear = -1, front = -1, item, deque[n];
void insertrear(){
    if (rear == n - 1)
        printf("Queue Full\n");   
    else { 
            if (rear == -1)
            {     front = 0;
                  printf("Enter the value to Enqueue\n");
                  scanf("%d",&item);
                  rear++;
                  deque[rear] = item;
            }
            else {
                  printf("Enter the value to Enqueue\n");
                  scanf("%d",&item);
                  rear++;
                  deque[rear] = item;
              }
         }
}
void insertfront(){
      if (front==0)
            printf("Queue Full\n");   
      else {
                  printf("\nEnter the value to Enqueue\n");
                  scanf("%d",&item);
                  front--;
                  deque[front] = item;
              }
}

void deletefront(){
    if (front==-1 && rear==-1)
        printf("Queue Empty\n");
    else 
    { 
        printf("Item Removed: %d\n",  deque[front]);
        if (front==rear) 
        	(front= rear = -1);
        else
        	front++;	
    }
}
void deleterear(){
      if (front==-1 && rear==-1)
        printf("Queue Empty\n");
    else 
    { 
        printf("Item Removed: %d\n",  deque[rear]);
        if (front == rear)
        	(front= rear = -1);
        else
        	rear--;     
    }
}
void display(){
      int i;
      for (i=front; i<=rear; i++)
        printf("%d\t",deque[i]);
}
int main()
      {
      int choice;
      printf("Deque Options\n");
            do {
                  printf("1.Insert at Rear\n2.Insert at Front\n3.Delete at Front\n");
                  printf("4.Delete at Rear\n5.Display Queue\n6.Exit\n");
                  printf("Select any options ");
                  scanf("%d",&choice);
                  switch (choice)
                  {
                        case 1: insertrear();
                                    break;
                        case 2: insertfront();
                                    break;
                        case 3: deletefront();
                                    break;
                        case 4: deleterear();
                                    break;
                        case 5: display();
                                    break;
                        default: choice=0;
                              break;
                  }
              }while (choice!=0);
}
