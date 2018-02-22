
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    gets(str);
    if(str==strrev(str))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
