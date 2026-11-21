//sr no 56
//26102B0085
// P3- temperature conversion table 
#include <stdio.h>
int main()
{
    int step;
    float start,end,f;
    do 
    {
        printf("enter starting celsius: ");
        scanf("%f",&start);
        printf("enter stopping celsius: ");
        scanf("%f",&end);
        printf("enter step size: ");
        scanf("%d",&step);
    }
    while((start>end) || (step<=0));
    printf("celsius \t farenheit\n");
    while(start<=end)
    {
        f= (9.0/5)*start+32;
        printf("%.1f \t %.1f \n",start,f);

        start=start+step;

    }
    return 0;
    
}