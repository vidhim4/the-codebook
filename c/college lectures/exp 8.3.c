//wap two add a 1d array

#include<stdio.h>
int main()
{
	int a[100], b[100],i,n;
	printf(" enter the length of array");
	scanf(" %d",&n);
	printf(" enter %d numbers of array a:",n);
	for(i=0; i<n;i++)
	{
		scanf(" %d", &a[i]);
	}
	
	printf(" enter %d numbers of array b:",n);
	for(i=0; i<n;i++)
	{
		scanf(" %d", &b[i]);
	}
	printf(" the addition of 2 arrays is:");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]+b[i] );
	}
	return 0;
}
