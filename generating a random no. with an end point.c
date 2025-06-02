#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random;
    srand(time(NULL));
    random= rand()%4;
    printf("%d", random);

}