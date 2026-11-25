//wap to reverse array
#include <stdio.h>
int main()
{
	int i,j,r,c,m[10][10];
	printf("how many values do you want to store in rows and columns");
	scanf("%d%d",&r,&c);
	printf("enter  values: ");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	printf("your matrix  is : \n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}


