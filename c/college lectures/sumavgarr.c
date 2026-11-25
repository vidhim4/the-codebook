//wap to initialise and display elements of array with their sum and avg
#include <stdio.h>
int main()
{
	int n,i,a[100],sum=0,count=0;
	float avg;
	printf("how many values do you want to store : ");
	scanf("%d",&n);
	
	printf("enter  values: ");
	for (i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
			
	printf(" the sum is : %d \n",sum);
	avg=(float)sum/n;
	printf("the avg is : %.2f",avg);
	
	for (i=0;i<n;i++)
	{
		if (a[i]<avg)
			count++;
	}
	return 0;
	
}
