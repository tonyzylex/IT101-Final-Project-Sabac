#include <stdio.h>

int main(){
    int LoopBreak = 0;

    while (LoopBreak != 1)
    {
        int userChoice = 0;
        printf("\n=====================\n");
        printf("Welcome to C-ToolKit!");
        printf("\n=====================");
        printf("\n[1] = The Pattern Generator");
        printf("\n[2] = Pascals Triangle");
        printf("\n[3] = Grade Calculator & Evaluator");
        printf("\n[4] = Palindrone Checker");
        printf("\n[5] = Exit program");
        printf("\nChoose option(1-5):");
        scanf("%d",&userChoice);

        if (userChoice == 1)
        {
            printf("\nThe Pattern Generator is under development");
            // Code block logic for The Pattern Generator 
        }else if (userChoice == 2)
        {
            printf("\nThe Pascals Triangle is under development");
            // Code block logic for Pascals Triangle
        }else if (userChoice == 3)
        {
            printf("\nThe Grade Calculator & Evaluator is under development");
            // Code block logic for Grade Calculator & Evaluator
        }else if (userChoice == 4)
        {
            printf("\nThe Palindrone Checker is under development");
            // Code block logic for Palindrone Checker
        }else if (userChoice == 5)
        {
            printf("\nExiting program..!");
            LoopBreak = 1;
        }else {
            printf("\nInvalid input! Try again!");
        }
    }
    
    
    
    return 0;
}