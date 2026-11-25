//sum ooof first n natural numbers
#include <stdio.h>
int sum(int n)
{
	if (n==0)
	{
		return 0;
	}
	else
	{
		return (n+sum(n-1));
	}
}
int main()
{
	int s,n;
	printf("enter n: ");
	scanf("%d",&n);
	s=sum(n);
	printf("the sum is %d",s);
	return 0;
}
