// wap to find addition of all the elements present in group
#include<stdio.h>
int main()
{
  int a[100],i,sum=0,n;
  float avg;
  printf(" enter the length of array:");
  scanf("%d", &n);
  printf(" enter the %d numbers",n);
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
  	sum=sum+a[i];
  }
  printf("the addition of all elementsis :%d:",sum);
  avg=(float)sum/n;
  printf("the avg of all elemnets is:",avg);
  return 0;
}
