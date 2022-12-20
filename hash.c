#include <stdio.h>
#include <stdlib.h>
#define Table 7
struct Node{
       int data;
       struct Node *next;
};
struct Node *head[Table] = { NULL }, *Chain;

void insert(){
    int key;
    printf("\nEnter the Value\n");
    scanf("%d",&key);
    int hash = key % Table;

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode->data = key;
    newNode->next = NULL;
    if(head[hash] == NULL)
        head[hash] = newNode;
    else{
    
        Chain = head[hash];
        while(Chain->next != NULL){
           Chain = Chain->next;
        }
        Chain->next = newNode;
    }
    printf("<-Insertion Completed!->\n");
}
void search(){
    int key;
    printf("\nEnter the key\n");
    scanf("%d",&key);
    int INDEX = key % Table;
    if(head[INDEX] == NULL)
        printf("Element not Found\n");
    else{
        Chain = head[INDEX];
        int COL=1;
        while (Chain != NULL){
            if(Chain->data == key){
                    printf("Element Found at %d INDEX at %d Column \n",INDEX,COL);
                    break;
                }
                Chain = Chain->next;
                COL++;
        }
        if(Chain==NULL)
            printf("Element not Found\n");
    }
}
void display(){
 printf("   <INDEX>\t<CHAIN>\n");
    for(int i = 0; i < Table; i++)
    {
        printf("\n\t[%d]   ",i);
        Chain =head[i];
        while(Chain!=NULL){
             printf(" [%d]-->",Chain->data);
             Chain=Chain->next;
             }
          }
          printf("\n");
}
int main(){
       printf("\nCHAIN HASHING\n");
       int c;
       printf("===================Menu==================\n");
       do{
        printf("0.Exit   1.Insert   2.Display   3.Search\nEnter your choice: \n");
        scanf("%d",&c);
        switch(c){
            case 0:
                break;
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            default :printf("\n\tINVALID INPUT\t\n"); 
       }
  }while(c!=0);
}

