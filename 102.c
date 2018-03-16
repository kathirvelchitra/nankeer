#include<stdio.h>
void main()
{
int n;
printf("\n enter the string:");
scanf("%d",&n);
while(n%2==0)
{
    printf("\n %d",(n/2));
    n=n/2;
}
}
