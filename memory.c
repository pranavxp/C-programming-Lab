#include <stdio.h>
void bestFit(int block[], int blockSIZE, int process[], int processSIZE)
{
    printf("Process No\t\tProcess\t\tBlock Number\t\tBlock Size\t\tRemaining Space\n");
    for (int i = 0; i < processSIZE; i++)
    {
        int bestindex = -1;
        for (int j = 0; j < blockSIZE; j++)
        {
            if (block[j] >= process[i])
            {
                if (bestindex == -1)
                    bestindex = j;
                else if (block[bestindex] > block[j])
                    bestindex = j;
            }
        }
        if (bestindex != -1)
        {
            printf("%d\t\t%d\t\t%d\t\t\t%d\t\t\t",i + 1, process[i],bestindex, block[bestindex]);
            block[bestindex] = block[bestindex] - process[i];
            printf("%d\n",block[bestindex]);
        }
        else
            printf("%d \t\t %d \t\t is not allocated\n",i + 1, process[i]);
    }
}
void worstFit(int block[], int blockSIZE, int process[], int processSIZE)
{
    printf("Process No\t\tProcess\t\tBlock Number\t\tBlock Size\t\tRemaining Space\n");
    for (int i = 0; i < processSIZE; i++)
    {
        int worstFIT = -1;
        for (int j = 0; j < blockSIZE; j++)
        {
            if (block[j] >= process[i])
            {
                if (worstFIT == -1)
                    worstFIT = j;
                else if (block[worstFIT] < block[j])
                    worstFIT = j;
            }
        }

        if (worstFIT != -1)
        {
            printf("%d\t\t%d\t\t%d\t\t\t%d\t\t\t",i + 1, process[i],worstFIT, block[worstFIT]);
            block[worstFIT] = block[worstFIT] - process[i];
            printf("%d\n",block[worstFIT]);
        }
        else
            printf("%d \t\t %d \t\t is not allocated\n",i + 1, process[i]);
    }
}
void firstFit(int block[], int blockSIZE, int process[], int processSIZE)
{
    printf("Process No\t\tProcess\t\tBlock Number\t\tBlock Size\t\tRemaining Space\n");
    for (int i = 0; i < processSIZE; i++)
    {
        int flag = 0;
        for (int j = 0; j < blockSIZE; j++)
        {
            if (block[j] >= process[i])
            {
                   printf("%d\t\t%d\t\t%d\t\t\t%d\t\t\t",i + 1, process[i],j+1, block[j]);
                   block[j] = block[j] - process[i];
                   printf("%d\n",block[j]);
                flag = 1;
                break;
            }
        }

        if (flag != 1)
        {
            printf("%d \t\t %d \t\t is not allocated\n",i + 1, process[i]);
        }
    }
}

int main ()
{
       int blocksize, processsize,i;
       printf("******Memory Allocation******\n");
       printf("\n");
       printf("Enter Block Size\n");
       scanf("%d",&blocksize);
       int block[blocksize];
       printf("Enter number of Processes\n");
       scanf("%d",&processsize);
       int process[processsize];
       printf("Enter Memory locations\n");
       for (i=0; i < blocksize; i++)
       {
              scanf("%d",&block[i]);
       }    
       printf("Enter Processes\n");
       for (i=0; i < processsize; i++){
              scanf("%d",&process[i]);
       }
       printf("****Enter the operation to be performed****\n");
       printf("1.BestFit\n2.FirstFit\n3.WorstFit\n4.Exit\n");   
       printf("Enter the choice to be performed\n")    
       scanf("%d",&ch)
              scanf("%d",&i);
              do{
              switch (i){
              case 1 : bestFit(block, blocksize, process, processsize);
                       break;
              case 2 : firstFit(block, blocksize, process, processsize);
                       break;
              case 3 : worstFit(block, blocksize, process, processsize);
                       break;
              default : i = 0;
                     break;
              }  
              }while(ch!=4)    
}

