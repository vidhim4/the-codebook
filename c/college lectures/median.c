//wap to sort-bubble -decending
#include <stdio.h>
int main()
{
	int n,i,a[100],t,j;
	float m;
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
			if (a[j]<a[j+1])
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
	if (n%2==0)
	{
		m=(a[n/2-1]+a[n/2])/2.0;
		printf("median is %f",m);
	}
	else
	{
		
		printf("median is %d",a[n/2]); //d here cus median in odd number array is a value of array itself and we declared it value as int
	}
	return 0;
}
