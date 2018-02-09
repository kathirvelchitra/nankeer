#include<stdio.h>
void main()
{
    int n,i;
    char str[30];
    printf("\n enter the number:");
    scanf("%d",&n);
    printf("\n enter the string:");
    scanf("%s",&str);
    for(i=0;i<n;i++)
    {
        printf("%c",str[i]);
        
    }
}
