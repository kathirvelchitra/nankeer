#include<stdio.h>
void main()
{
    int a;
    printf("\n enter the number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the nearest even num is %d",a);
    }
    else
    {
        printf("the nearest even num is %d",a-1);
    }
}
