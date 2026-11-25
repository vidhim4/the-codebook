//wap to sort-bubble
#include <stdio.h>
int main()
{
	int n,i,a[100],t,j;
	printf("how many values do you want to store : ");
	scanf("%d",&n);
	printf("enter  values: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<n;i++) //no of passes - how many positions
	{
		for (j=0;j<(n-1);j++) // how many comparisions 
		{
			if (a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
		
		
	}
	printf("sorted array :\n ");
	for (i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
	return 0;
}
