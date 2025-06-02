#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random;
    int lower, upper;
    lower=1;
    upper=3;
    srand(time(NULL));
    random= (rand() % (upper - lower + 1)) + lower;
    printf("%d", random);

}