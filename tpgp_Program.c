#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){
    
    while (1)
    {
        system("cls");
        int userChoice = 0;
        printf("\n=====================================================\n");
        printf("                 Welcome to C-ToolKit!");
        printf("\n=====================================================");
        printf("\n[1] = The Pattern Generator");
        printf("\n[2] = Pascals Triangle");
        printf("\n[3] = Grade Calculator & Evaluator");
        printf("\n[4] = Palindrone Checker");
        printf("\n[5] = Exit program");
        printf("\nChoose option(1-5):");

        if (scanf("%d",&userChoice) != 1)
        {
            printf("\nInvalid input");
            while (getchar() != '\n');
        }else{
            if (userChoice == 1)
            {
            
            }else if (userChoice == 2)
            {
                int size = 0,l1 = 0,l2 = 0, l3 = 0;
                printf("You have selected [Pascals Triangle]");
                printf("\nInput size:");
                
                if(scanf("%d",&size) != 1){
                    printf("\nInvalid input");
                    while (getchar() != '\n');
                }else{
                    if (size < 1)
                    {
                        printf("Size cannot be 0 or negative");
                    }else{
                        printf("\nOutput:\n");
                        for (l1 = 0; l1 < size; l1++)
                        {   
                            long long int sum = 1;
                            for (l2 = size - l1 ; l2 > 0; l2--)
                            {
                                printf("   ");
                            }
                            for ( l3 = 0; l3 <= l1; l3++)
                            {
                                printf("%6lld",sum);
                                sum = sum * (l1 - l3) / (l3 + 1);
                                
                            } 
                            printf(" \n");   
                        }
                    }
                }
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
                break;
            }else {
                printf("\nInvalid input! Try again!");
            }
        }
        printf("\nPress any key to continue..");
        getch();
    }
    return 0;
}