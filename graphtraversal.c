#include <stdio.h>
int queue[20], top = -1, front = -1, rear = -1, a[20][20], status[20], stack[20];

void add(int item)
{
    if (rear == 19)
        printf("QUEUE FULL\n");
    else
    {
        if (rear == -1)
        {
            queue[++rear] = item;
            front++;
        }
        else
            queue[++rear] = item;
    }
}
int delete ()
{
    int i;
    if ((front > rear) || (front == -1))
        return (0);
    else
    {
        i = queue[front++];
        return i;
    }
}
void push(int item)
{
    if (top == 19)
        printf("STACK OVERFLOW\n");
    else
        stack[++top] = item;
}
int pop()
{
    int j;
    if (top == -1)
        return 0;
    else
    {
        j = stack[top--];
        return j;
    }
}

void bfs(int s, int n)
{
    int p, i;
    add(s);
    status[s] = 1;
    p = delete ();
    if (p != 0)
        printf("%d\t", p);
    while (p != 0)
    {
        for (i = 1; i <= n; i++)
            if ((a[p][i] != 0) && (status[i] == 0)){
                add(i);
                status[i] = 1;
            }
        p = delete ();
        if (p != 0)
            printf("%d\t", p);
    }
    for (i = 1; i <= n; i++)
        if (status[i] == 0)
            bfs(i, n);
}

void dfs(int s, int n)
{
    int i, k;
    push(s);
    status[s] = 1;
    k = pop();
    if (k != 0)
        printf("%d\t", k);
    while (k != 0)
    {
        for (i = 1; i <= n; i++)
            if ((a[k][i] != 0) && (status[i] == 0))
            {
                push(i);
                status[i] = 1;
            }
        k = pop();
        if (k != 0)
            printf("%d\t", k);
    }
    for (i = 1; i <= n; i++)
        if (status[i] == 0)
            dfs(i, n);
}


void main(){
    int n, i, s, c, j;
    printf("ENTER THE NUMBER OF VERTICES : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            printf("ENTER 1 IF %d----->%d ELSE 0 ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("THE ADJACENCY MATRIX IS\n");
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
    do{
        for (i = 1; i <= n; i++)
            status[i] = 0;    
        printf("\n==========MENU===========\n");
        printf("ENTER YOUR CHOICE\n1.B.F.S\n2.D.F.S\n3.Exit\n");
        scanf("%d", &c);
        switch (c){
            case 1:
         	  printf("ENTER THE SOURCE VERTEX :");
       	  scanf("%d", &s);
                bfs(s, n);
                break;
            case 2:
                printf("ENTER THE SOURCE VERTEX :");
        	  scanf("%d", &s);
                dfs(s, n);
                break;
        }
    } while (c!=3);
}

