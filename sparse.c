//program to represent sparse matrix
#include<stdio.h>
struct sparse {
int row,col,value;
};

int main()
{
	int n,i,j,k=0;
	printf("Enter the square matrix size: ");
	scanf("%d",&n);
	int matrix[n][n];
	printf("Enter the elements for matrix: \n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			scanf("%d",&matrix[i][j]);  
		}
	}
	struct sparse spr[n+n];
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			if (matrix[i][j] != 0)
			{
				spr[k].row = i;
				spr[k].col = j;
				spr[k].value = matrix[i][j];
				k++;
			}
		}
	}
	printf("\n\n");
      for (i=0; i<n; i++)
      {
		for (j=0; j<n; j++)
		{
                        printf("%d\t",matrix[i][j]);
		}
            	printf("\n");
      }

	printf("\n\nArray size = %d\n\n",k);
	printf("Row (%d)\tCol (%d)\tValue(%d)\n",n,n,k);
	for (i=0; i<k; i++)
	{
    		printf("%d\t %d\t %d\n",spr[i].row,spr[i].col,spr[i].value);  
    	}
}
