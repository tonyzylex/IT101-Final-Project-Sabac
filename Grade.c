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
            while (1)
            {
                printf("\n Enter grade ( 1-5 ) in Prelim, Midterm, Pre-Final, and Final: ");
                if (scanf(" %f", &prelim) != 1 || scanf(" %f", &midterm) != 1 ||
                    scanf(" %f", &prefinal) != 1 || scanf(" %f", &final) != 1)
                {
                    printf("Invalid input! Please enter a valid number.\n");
                    while (getchar() != '\n'); 
                    continue;
                }
                if (prelim < 1 || prelim > 5 || midterm < 1 || midterm > 5 || prefinal < 1 || prefinal > 5 || final < 1 || final > 5)
                {
                    printf("Invalid input! Please enter grades between 1 and 5.\n");
                    while (getchar() != '\n'); 
                    continue;
                }
                break; 
            }
            average = (prelim + midterm + prefinal + final) / 4;
            printf("Your average is: %.2f\n", average);
            if (average <= 3.0)
            {
                printf("You are PASSED!\n");
            } else if (average > 3.0)
            {
                printf("You are FAILED!\n");
            }
        }

        printf("\n\nDo you want to return to the MENU? (Y/N): ");
        scanf(" %c", &tryAgain);
        printf("\n");

    } while (tryAgain == 'y' || tryAgain == 'Y');

    printf(">> Thank you for using our console! <<\n");

    return 0;
}
