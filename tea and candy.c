#include<stdio.h>
int main()
{
    int tea,candy;
    printf("enter the amount of tea,candy \n");
    scanf("%d %d",&tea,&candy);
    if (candy<5||tea<5)
    {
        printf("0");
    }
    else if(candy>=2*tea||tea>=2*candy)
    {
        printf("2");
    }
    else 
    {
        printf("1");
    }
}