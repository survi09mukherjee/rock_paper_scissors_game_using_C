#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate computer's choice
int generateComputerChoice() {
    srand(time(NULL));
    return rand() % 3; // Generates a random number between 0 and 2
}

// Function to display choices
void displayChoices(int userChoice, int computerChoice) {
    switch(userChoice) {
        case 0:
            printf("You chose Rock.\n");
            break;
        case 1:
            printf("You chose Paper.\n");
            break;
        case 2:
            printf("You chose Scissors.\n");
            break;
    }
    
    switch(computerChoice) {
        case 0:
            printf("Computer chose Rock.\n");
            break;
        case 1:
            printf("Computer chose Paper.\n");
            break;
        case 2:
            printf("Computer chose Scissors.\n");
            break;
    }
}

// Function to determine winner
void determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    int userChoice, computerChoice;
    
    printf("Rock-Paper-Scissors Game\n");
    printf("0. Rock\n");
    printf("1. Paper\n");
    printf("2. Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &userChoice);
    
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice. Please try again.\n");
        return 1;
    }
    
    computerChoice = generateComputerChoice();
    
    displayChoices(userChoice, computerChoice);
    determineWinner(userChoice, computerChoice);
    
    return 0;
}