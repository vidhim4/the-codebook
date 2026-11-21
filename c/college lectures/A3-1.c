//sr no 56
//26102B0085
// P1- consecutive increase detector

#include <stdio.h>
int main()
{
    int N,a,temp,count=0,i;
    do 
    {
        printf("enter number of values u want to check: ");
        scanf("%d",&N);
    }
    while(N<2);
    
    printf("enter value ");
    scanf("%d",&temp);
    for(i=2;i<=N;i++)
    {
        printf("enter value ");
        scanf("%d",&a);
        if(a>temp)
        {
            count++;
        }
        temp=a;
    }

    printf("%d increases",count);
    return 0;
}
