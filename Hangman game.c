#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int random1()
{
    int random;
    srand(time(NULL));
    random= rand()%20;
    return random;

}
int random2(b=Dict[a])
{
    int random;
    srand(time(NULL));
    random= rand()%(len(b));
    return random;

}
//Driver Code 
int main ()
{
int a;
char b;
char Dict[] = {"python", "algorithm", "hangman", "binary", "recursion", "function", "variable", "inheritance", "encapsulation", "polymorphism", "debugging", "syntax", "compiler", "iteration", "exception", "bitwise", "concatenation", "database", "queue", "stack"};
a=random1();
b= Dict[a];

}