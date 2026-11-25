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
	int s,k;
	printf("enter k: ");
	scanf("%d",&k);
	s=fibo(k);
	printf("the kth term  is %d",s);
	return 0;
}
