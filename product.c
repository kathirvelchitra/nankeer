
#include<stdio.h>
void main()
{
    int n,a,k;
    printf("\n Enter two values:");
    scanf("%d%d",&n,&a);
    k=n*a;
    if(k%2==0)
    {
        printf("even");
    
    }
    else
    {
        printf("odd");
    }
}
