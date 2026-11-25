#include <stdio.h>
int main()
{
	int r,c,i,j,m[10][10];
	printf("enter size of matrix: ");
	scanf("%d%d",&r,&c);
	if (r==c)
	{
		int m[r][c];
		printf("enter elements of matirx:");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				scanf("%d",&m[i][j]);
			}
		}
	
		int f=1;
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				if (m[i][j] != m[j][i])
				{
					f=0;
					break;
				}
			}
		}
		if (f==0)
		{
			printf("not a symmertric matrix ");
		}
		else
		{
			printf("symmetric matrix ");
		
		}	
	}
	else
	{
		printf("not a square matrix");
	}
	return 0;
}
