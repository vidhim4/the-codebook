#include<stdio.h>
int factorial(int n)
{
	if (n==0)
	{
		return 1;
	}
	else 
	{
		return n*factorial(n-1);
	}
	
}
int main ()
{
	int n,f;
	printf("enter");
	scanf("%d",&n);
	f=factorial(n);
	printf("Fact is %d is %d ",n,f);
	return 0;

}


