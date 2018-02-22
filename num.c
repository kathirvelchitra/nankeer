
#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("Enter the number:\n");
    scanf("%d",&n1);
    printf("enter the two numbers:\n");
    scanf("%d%d",&n2,&n3);
    if(n1>=n2&&n1<=n3)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
