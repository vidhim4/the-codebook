//sr no 56
//26102B0085
// P2 - count digits and classify length
#include <stdio.h>
int main()
{
    int n,count=0;
    do 
    {
        printf("enter n: ");
        scanf("%d",&n);
    }
    while(n<0);
    if (n==0)
    {
        count=1;
    }
    while (n>0)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);
    return 0;
}