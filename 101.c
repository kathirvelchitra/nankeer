#include<stdio.h>
void main()
{
int n,i,r;
printf("\n enter the string:");
scanf("%d",&n);
printf("\n enter the number:");
scanf("%d",&i);
while(i!=0&&n!=0)
{
r=n%10;
printf("%d",r);
n=n/10;
i--;
}
}
