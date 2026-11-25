//wap to reverse array
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
	
	for (i=0,j=n-1;i<n/2;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		
	}
	printf("reverse array :\n ");
	for (i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
	return 0;
}
