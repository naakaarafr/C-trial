#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate computer's choice (0 for Stone, 1 for Paper, 2 for Scissors)
int r() {
    srand(time(NULL));  // Seed the random number generator
    return rand() % 3;  // Return a random number between 0 and 2
}

int main() {
    int computer;
    char input;
    
    // Prompt the user to enter their choice
    printf("Enter your choice: \n S for Stone \n P for Paper \n Sc for Scissors\n");
    scanf(" %c", &input);  // Add space before %c to handle newline character
    
    // Get computer's choice
    computer = r();
    
    // Display computer's choice
    if (computer == 0)
        printf("Computer chose: Stone\n");
    else if (computer == 1)
        printf("Computer chose: Paper\n");
    else
        printf("Computer chose: Scissors\n");

    // Compare the choices
    if ((computer == 0 && input == 'S') || 
        (computer == 1 && input == 'P') || 
        (computer == 2 && input == 'S')) {
        printf("It's a draw!\n");
    } 
    else if ((computer == 0 && input == 'P') || 
             (computer == 1 && input == 'S') || 
             (computer == 2 && input == 'P')) {
        printf("You won!\n");
    } 
    else {
        printf("You lost!\n");
    }

    return 0;
}
