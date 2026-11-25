// wap to find max and min number present in a array
#include<stdio.h>
int main()
{
	int a[100],i,n , min,max;
	printf(" enter the length of array:");
	scanf("%d",&n);
	printf(" enter the %d number:",n);
	for(i=0; i<n ; i++)
	{ 
	     if (a[i] < a[i+1])
	        max =a[i+1];
	     
	}
		for(i=0; i<n-1 ; i++)
	{ 
	     if (a[i] > a[i+1])
	        min =a[i];
	     
	}

   printf(" the maximum number is:",max);
   printf(" the min number is:", min);
   return 0;
}
