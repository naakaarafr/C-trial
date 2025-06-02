#include<stdio.h> 

int main()
{
    int a, b;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter your choice:\n");
    printf("1. Add 10 to the number\n");
    printf("2. Multiply the result by 2\n");
    printf("3. Subtract 5 from the result\n");
    printf("4. Divide the result by 3\n");
    scanf("%d", &b);
    
    if (b <= 4 && b >= 1)  // Ensure the choice is within valid range
    {
        if (b == 1)  // Corrected the condition to use 'b'
        {
            printf("Result: %d\n", a += 10);
        }
        else if (b == 2)
        {
            printf("Result: %d\n", a * 2);
        }
        else if (b == 3)
        {
            printf("Result: %d\n", a -= 5);
        }
        else if (b == 4)
        {
            printf("Result: %d\n", a / 3);
        }
    }
    else
    {
        printf("Invalid choice!\n");
    }

    return 0;  // Return 0 to indicate successful execution
}
