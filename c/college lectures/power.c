#include<stdio.h>
#include<math.h>
int power(int x,int y)
{
	if (y==0)
	{
		return 1;
	}
	else 
	{
		return x*power(x,y-1);
	}
	
}
int main ()
{
	int x,y,f;
	printf("enter");
	scanf("%d",&x);
	scanf("%d",&y);
	f=power(x,y);
	
	printf("ans is %d ",f);
	return 0;

}


