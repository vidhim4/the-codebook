//calculate transpose of square matrix in itself
#include <stdio.h>
int main()
{
	int r1,r2,c1,c2,i,j,k;
	printf("enter size of matrix:1 ");
	scanf("%d%d",&r1,&c1);
	printf("enter size of matrix2: ");
	scanf("%d%d",&r2,&c2);
	if  (c1==r2) //change here 
	{
		int a[r1][c1],b[r2][c2],c[r1][c1];
		printf("enter elements of matirx 1:");
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter elements of matirx 2:");
		for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				//change from add starts from here 
				c[i][j]=0; 
				for (k=0;k<c1;k++)
				{
					c[i][j]=c[i][j]+ a[i][k]*b[k][j];
				}
				//till here
			}
		}
		printf("results: \n ");
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c2;j++) //changed from c1 to c2
			{
				printf("%d \t",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("operation not possible");
	}
	return 0;
}

