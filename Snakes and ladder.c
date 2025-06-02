#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int Dice() {
    // Fix the dice roll to generate numbers from 1 to 6
    return (rand() % 6) + 1;
}

int main() {
    char player1[50], player2[50];  // Store player names as strings
    int a = 0, b = 0;  // Initialize player positions

    // Get player names
    printf("Player 1, enter your name: ");
    scanf("%s", player1);  // %s to take string input

    printf("Player 2, enter your name: ");
    scanf("%s", player2);

    srand(time(NULL));  // Initialize random number generator only once

    while (a < 100 && b < 100) {  // Play until one of the players reaches 100
        int m, n;
        
        // Player 1's turn
        printf("%s, press any key to throw the die\n", player1);
        getchar();  // To consume newline from previous input
        getchar();  // Wait for player input
        m = Dice();
        printf("%s rolled a %d\n", player1, m);
        a += m;
        printf("you reached %d \n", a);

        // Check for snakes and ladders for player 1
        switch (a) {
            case 2: a = 23; printf("YAY you climbed a ladder\n"); break;
            case 8: a = 12; printf("YAY you climbed a ladder\n"); break;
            case 39: a = 80; printf("YAY you climbed a ladder\n"); break;
            case 62: a = 78; printf("YAY you climbed a ladder\n"); break;
            case 17: a = 93; printf("YAY you climbed a ladder\n"); break;
            case 75: a = 96; printf("YAY you climbed a ladder\n"); break;
            case 29: a = 54; printf("YAY you climbed a ladder\n"); break;
            case 32: a = 51; printf("YAY you climbed a ladder\n"); break;
            case 70: a = 89; printf("YAY you climbed a ladder\n"); break;
            case 41: a = 20; printf("SHIT you got bitten by a snake\n"); break;
            case 82: a = 61; printf("SHIT you got bitten by a snake\n"); break;
            case 59: a = 37; printf("SHIT you got bitten by a snake\n"); break;
            case 99: a = 4; printf("SHIT you got bitten by a snake\n"); break;
            case 92: a = 76; printf("SHIT you got bitten by a snake\n"); break;
            case 67: a = 50; printf("SHIT you got bitten by a snake\n"); break;
            case 31: a = 14; printf("SHIT you got bitten by a snake\n"); break;
        }

        if (a >= 100) {  // Player 1 wins
            printf("%s won!\n", player1);
            break;
        }

        // Player 2's turn
        printf("%s, press any key to throw the die\n", player2);
        getchar();  // Wait for player input
        n = Dice();
        printf("%s rolled a %d\n", player2, n);
        b += n;
        printf("you reached %d \n", b);
        // Check for snakes and ladders for player 2
        switch (b) {
            case 2: a = 23; printf("YAY you climbed a ladder\n"); break;
            case 8: a = 12; printf("YAY you climbed a ladder\n"); break;
            case 39: a = 80; printf("YAY you climbed a ladder\n"); break;
            case 62: a = 78; printf("YAY you climbed a ladder\n"); break;
            case 17: a = 93; printf("YAY you climbed a ladder\n"); break;
            case 75: a = 96; printf("YAY you climbed a ladder\n"); break;
            case 29: a = 54; printf("YAY you climbed a ladder\n"); break;
            case 32: a = 51; printf("YAY you climbed a ladder\n"); break;
            case 70: a = 89; printf("YAY you climbed a ladder\n"); break;
            case 41: a = 20; printf("SHIT you got bitten by a snake\n"); break;
            case 82: a = 61; printf("SHIT you got bitten by a snake\n"); break;
            case 59: a = 37; printf("SHIT you got bitten by a snake\n"); break;
            case 99: a = 4; printf("SHIT you got bitten by a snake\n"); break;
            case 92: a = 76; printf("SHIT you got bitten by a snake\n"); break;
            case 67: a = 50; printf("SHIT you got bitten by a snake\n"); break;
            case 31: a = 14; printf("SHIT you got bitten by a snake\n"); break;
        }

        if (b >= 100) {  // Player 2 wins
            printf("%s won!\n", player2);
            break;
        }
    }

    return 0;
}
