#include<stdio.h>

int main()
{
    int age,yos,ctenmarks,ctwelvemarks;
    
    printf("enter your age\n");
    scanf("%d",&age);
    printf("enter your year of study\n");
    scanf("%d",&yos);
   
    
    printf("enter your class 10th marks\n");
    scanf("%d",&ctenmarks);
    printf("enter your class 12th marks\n");
    scanf("%d",&ctwelvemarks);
    printf("the product of age and year of study is:%d \n",(age*yos));
    printf("the sum of 10th and 12th marks is:%d \n",(ctenmarks+ctwelvemarks));
    printf("the difference of 10th and 12th marks is:%d \n",(ctenmarks-ctwelvemarks));
    printf("double the age of the user is:%d \n",(age<<1));
}