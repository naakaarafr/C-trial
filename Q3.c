#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a,b;
    printf("enter 2 different temps");
    scanf("%d\n%d",&a,&b);
    if (a>100 && b<0)
    {printf("true");}
    else if (b>100 && a<0)
    {printf("true");}
    else 
    {printf("false");}
}