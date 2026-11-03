#include <stdio.h>

int main(){
    int LoopBreak = 0;
    char tryAgain = 'Y';

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
        
        if (userChoice == 1) // Pattern Generator 
        { 
            
        } else if (userChoice == 2) // Pascals Triangle
        { 
        
        } else if (userChoice == 3) // Grade Calculator and Evaluator 
        {
            float prelim = 0, midterm = 0, prefinal = 0, final = 0, average = 0;
            printf("======== GRADE CALCULATOR AND EVALUATOR ========\n");
            printf("\n This program will calculate your average grade and determine if you passed or failed based on your grades.\n");
            printf("\n Enter grade in Prelim ( 1-5 ): ");
            scanf(" %f", &prelim);
            printf("\n Enter grade in Midterm ( 1-5 ): ");
            scanf(" %f", &midterm);
            printf("\n Enter grade in Pre-Final ( 1-5 ): ");
            scanf(" %f", &prefinal);
            printf("\n Enter grade in Final ( 1-5 ): ");
            scanf(" %f", &final);
            average = (prelim + midterm + prefinal + final) / 4;
            if (average <= 3.0)
            {
                printf("Your average is: %.2f\n", average);
                printf("You are PASSED!\n");
            } else if (average > 3.0)
            {
                printf("Your average is: %.2f\n", average);
                printf("You are FAILED!\n");
            } else
            {
                printf("Invalid input. Please enter valid grades.\n");
            }
        } else if (userChoice == 4) // Palindrome Checker 
        { 

        } else if (userChoice == 5)
        {
            break;
        }

        printf("\n\nDo you want to return to the MENU? (Y/N): ");
        scanf(" %c", &tryAgain);
        printf("\n");

    } while (tryAgain == 'y' || tryAgain == 'Y');

    printf(">> Thank you for using our console! <<\n");

    return 0;
}
