#include <stdio.h>
int main()
{int op,pos,i,A[5]={5,10,15,20,25},new;
printf("Choose your operation;\n");
printf("1.Insert");
printf("2.Delete");
scanf("%d",op);
if(op==1)
{printf("enter position at which you need to insert (b/w 1 to 5)");
scanf("%d",pos);
printf("enter new value");
scanf("%d",new);
if (1<=pos<=5)
{for (i=pos-1;i<5;i++)
    {A[i]=A[i+1];
    A[pos-1]= new;}}
if (op==2)
{printf("enter position at which you need to delete (b/w 1 to 5)");
scanf("%d",pos);
{A[pos-1].remove;}}
printf("%d",A[5]);}
else
{printf("invalid input");}}