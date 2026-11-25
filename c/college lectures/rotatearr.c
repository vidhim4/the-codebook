//wap to rotate elements of array in clockwise direction by 1 position
#include <stdio.h>
int main()
{
	int n,i,a[100],t;
	printf("how many values do you want to store : ");
	scanf("%d",&n);
	printf("enter  values: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" you array : ");
	for (i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	t=a[n-1];
	for (i=n-1;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=t;
	printf("rotated array : ");
	for (i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
}
