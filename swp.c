#include <stdio.h>
int main()
{
   int n,a;
   printf("\n enter the number");
   scanf("%d%d",&n,&a);
   n=n^a;
   a=n^a;
   n=n^a;
   printf("the swapping two number is:%d %d",n,a);
    return 0;
}


