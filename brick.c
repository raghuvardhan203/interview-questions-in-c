#include <stdio.h>
void main()
{
    int goal;
    int small;
    int big;
    printf("enter the value of small \n");
    scanf("%d",&small);
    printf("enter the value of big\n");
    scanf("%d",&big);
     printf("enter the inches of the goal\n");
    scanf("%d",& goal);
        int required=goal/5;
        if (required<=big)
        {
            int remaining=goal-(required*5);
            if(remaining<=small)
            {
                printf("true");
            }
            else
            {
                printf("false");
            }
        }
        else
        {
            int rem=goal-(big*5);
            if(rem<=small)
            {
               printf("true"); 
            }
            else
            {
                printf("false");
            }
        }
    
}
