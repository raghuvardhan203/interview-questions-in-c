#include <stdio.h>
void main()
{
    int size;
    printf("enter the no of elements to store\n");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;i++)
    {
        printf("enter the %d element \n",(i+1));
        scanf("%d",&a[i]);
    }
    int sum=0;
    for (int i=0;i<=size-1;i++)
    {
        sum=sum+a[i];
    }
        for(int i=0;i<=size-1;i++)
        {
            if(sum%a[i]==0)
            {
                printf("%d \t",a[i]);
            }
        }
        
    
}

   