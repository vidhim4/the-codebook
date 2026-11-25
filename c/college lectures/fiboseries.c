//kth term of fibonacchi
#include <stdio.h>
int fibo(int k)
{
	if (k==1 || k==2)
	{
		return 1;
	}
	else
	{
		return (fibo(k-1)+fibo(k-2));
	}
}
int main()
{
	int term,k,n;
	printf("how many terms: ");
	scanf("%d",&n);
	for (k=1;k<=n;k++)
	{
		term=fibo(k);
		printf("%d \t",term);
	}
	
	return 0;
}
