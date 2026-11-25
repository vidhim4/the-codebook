//wap to initialise and display elements of array with their sum and avg
#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,a[100],sum=0;
	float avg,var,sd,s=0;
	printf("how many values do you want to store : ");
	scanf("%d",&n);
	printf("enter  values: ");
	for (i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=(float)sum/n;
	printf("the avg is : %.2f",avg);
	
	for (i=0;i<n;i++)
	{
		sum=sum+pow((avg -a[i]),2);
	}
	var=s/n;
	sd=sqrt(var);
	printf("\n variange =%f\n std derivation = %f ",var,sd);
	return 0;
	
}
