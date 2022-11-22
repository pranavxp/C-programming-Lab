#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head=NULL,*newnode,*temp,*ptr=NULL;
void insrt_beg()
{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the item\n");
	if (head==NULL)
	{
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		head=newnode;
	}
	else
	{	
		scanf("%d",&newnode->data);
		newnode->next=head;
		head=newnode;
	}
}
void insrt_end()
{
	newnode = (struct node*) malloc(sizeof(struct node));
	printf("Enter the item\n");
	if(head==NULL)
	{	
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		scanf("%d",&newnode->data);
		temp->next=newnode;
		newnode->next=NULL;
	}
}
void insrt_pos()
{
	newnode = (struct node*) malloc(sizeof(struct node));
	if (head==NULL)
	{
		scanf("%d",&newnode->data);
		newnode->next= NULL;
		head=newnode;
	}
	else
	{
		int pos,i;
		printf("Enter the postion to add after\n");
		scanf("%d",&pos);
		temp=head;
		for(i=0,pos--;i<pos;i++)
		{
			temp=temp->next;
		}
		printf("Enter the item\n");
		scanf("%d",&newnode->data);
		newnode->next=temp->next;
		temp->next=newnode;
	}
}
void del_beg()
{
	if(head==NULL)
	{
		printf("The list is Empty\n");
	}
	else
	{
		temp=head;
		head=head->next;
		printf("The removed element is: %d",temp->data);
		free(temp);
	}
}
void del_pos()
{	
 	int i,pos;
	if(head==NULL)
	{
		printf("The list is Empty\n");
	}
	else
	{
		printf("Enter the postion\n");
		scanf("%d",&pos);
		temp=head;
		for(i=0,pos--;i<pos;i++)
		{
			ptr=temp;
			temp=temp->next;
		}
		ptr->next=temp->next;
		printf("The removed element is: %d",temp->data);
		free(temp);
	}
}
void del_end()
{
	if(head==NULL)
	{
		printf(" List is Empty\n");
	}
	else if(head->next==NULL)
	{
		temp=head;
		printf("The removed element is: %d",temp->data);
		free(temp);
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			ptr=temp;
			temp=temp->next;
		}	
		printf("The removed element is: %d",temp->data);
		ptr->next=NULL;
		free(temp);
	}
}
void display()
{
	if(head==NULL)
	{
		printf("The list is Empty\n");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
	}
}
void create()
{
	printf("Enter the data elements\n");
	insrt_end();
}

int main()
{	
    int c;
    printf("ENTER OPERATIONS TO BE PERFORMED");
    do{
        printf("\n0. EXIT\n1. INSERT BEGINNING\n2. INSERT END\n3. DELETE BEGINNING\n4. DELETE END\n5. INSERT AT ANY POSITION\n6. DELETE AT AT ANY POSITION\n7. DISPLAY\n8.CREATE LIST\n");
        printf("Enter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 0:
            	  break;  
            case 1:
                insrt_beg();
                break;
            case 2:
                insrt_end();
                break;
            case 3:
                del_beg();
                break;
            case 4:
                del_end();
                break;
            case 5:
                insrt_pos();
                break;
            case 6:
                del_pos();
                break; 
            case 7:
            	  display();
            	  break;     
            case 8:
                create();
                break;	        
            default:
                printf("Invalid Choice\n");
                break;
        }
    }while(c!=0);
}













