#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
                int shapeInput = 0;
                int size = 0;
                int tH = 0; 
                int l1 = 0, l2 = 0, l3 = 0,l4 = 0,l5 = 0;
                system("cls");
                printf("=============================\n");
                printf("Welcome to Pattern Generator!\n");
                printf("=============================");
                printf("\n[1] = Right Triangle");
                printf("\n[2] = Square");
                printf("\n[3] = Isosceles Triangle");
                printf("\n[4] = Inverted Right Triangle");
                printf("\n[5] = Christmas Tree:");
                printf("\nInput shape(1-5): ");

                if (scanf("%d",&shapeInput) != 1)
                {
                    printf("Invalid input");
                }else{
                    if (shapeInput == 1)
                    {
                        printf("You have selected [Right Triangle]");
                        printf("\nInput size:");
                        if (scanf("%d",&size) != 1)
                        {
                            printf("\nInvalid! input must be decimal value.");
                        }else{
                            if (size < 1)
                            {
                                printf("\nSize must not be 0 or negative!");
                            }else{
                                printf("\nOutput:\n");
                                for (l1 = 0; l1 < size; l1++)
                                {
                                    for (l2 = 0 ; l2 <= l1; l2++)
                                    {
                                        printf("* ");
                                    }
                                    printf(" \n");   
                                }  
                            }
                        }
                    }else if (shapeInput == 2){
                        printf("You have selected [Square]");
                        printf("\nInput size:");
                        if (scanf("%d",&size) != 1){
                            printf("\nInvalid! input must be decimal value.");
                        }else{
                            if (size < 1){
                                printf("\nSize must not be 0 or negative!");
                            }else{
                                printf("\nOutput:\n");
                                for ( l1 = 0; l1 < size; l1++)
                                {
                                    for ( l2 = 0; l2 < size; l2++)
                                    {
                                        printf("* ");
                                    }
                                    printf("\n");
                                }
                            }
                        }
                    }
                    else if (shapeInput == 3)
                    {
                        printf("You have selected [Isosceles Triangle]");
                        printf("\nInput size:");
                        if (scanf("%d",&size) != 1){
                            printf("\nInvalid! input must be decimal value.");
                        }else{
                            if (size < 1){
                                printf("\nSize must not be 0 or negative!");
                            }else{
                                printf("\nOutput:\n");
                                for (l1 = 0; l1 < size; l1++)
                                {
                                    for (l2 = size - l1 ; l2 > 0; l2--)
                                    {
                                        printf(" ");
                                    }
                                    
                                    for ( l3 = 0; l3 <= l1; l3++)
                                    {
                                        printf("* ");
                                    }
                                    printf(" \n");   
                                }  
                            }
                        }
                    }else if (shapeInput == 4)
                    {
                        printf("You have selected [Inverted Right Triangle]");
                        printf("\nInput size:");
                        if (scanf("%d",&size) != 1){
                            printf("\nInvalid! input must be decimal value.");
                        }else{
                            if (size < 1){
                                printf("\nSize must not be 0 or negative!");
                            }else{
                                printf("\nOutput:\n");
                                for (l1 = size; l1 >= 1; l1--)
                                {   
                                    for ( l3 = l1; l3 >= 1 ; l3--)
                                    {
                                        printf("* ");
                                    }
                                    printf(" \n");   
                                }
                            }
                        }
                        
                    }else if (shapeInput == 5){
                        printf("You have selected [Christmas Tree]");
                        printf("\nInput size:");
                        if (scanf("%d",&size) != 1){
                            printf("\nInvalid! input must be decimal value.");
                        }else{
                            if (size < 1){
                                printf("\nSize must not be 0 or negative!");
                            }else{
                                printf("\nOutput:\n");
                                for (l1 = 0; l1 < size; l1++)
                                {
                                    for (l2 = size - l1 ; l2 > 0; l2--)
                                    {
                                        printf(" ");
                                    }
                                    
                                    for ( l3 = 0; l3 <= l1; l3++)
                                    {
                                        printf("* ");
                                    }
                                    
                                    
                                    printf(" \n");   
                                }

                                tH = (int)size/2;
                                
                            for ( l3 = 0; l3 < tH; l3++)
                                {
                                    for ( l4 = 0; l4 < size - tH; l4++)
                                    {
                                        printf(" ");
                                    }

                                    for ( l5 = 0; l5 < tH; l5++)
                                    {
                                        printf(" *");
                                    }
                                    printf("\n");
                                }
                            }
                        }
                        
                    }else {printf("Invalid input!"); }
                }
                
            }else if (userChoice == 2)
            {
                int size = 0,l1 = 0,l2 = 0, l3 = 0;
                printf("You have selected [Pascals Triangle]");
                printf("\nInput size:");
                
                if(scanf("%d",&size) != 1){
                    printf("\nInvalid input");
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
                system("cls");
                float prelim = 0, midterm = 0, prefinal = 0, final = 0, average = 0;
                printf("======== GRADE CALCULATOR AND EVALUATOR ========\n");
                printf("\n This program will calculate your average grade and determine if you passed or failed based on your grades.\n");
                while (1)
                {
                    printf("\n Enter prelim grade ( 1-5 ):");
                    if (scanf(" %f", &prelim) != 1)
                    {
                        printf("Invalid input! Please enter a valid number.\n");
                        while (getchar() != '\n'); 
                        continue;
                    }
                    printf("\n Enter midterm grade ( 1-5 ):");
                    if (scanf(" %f", &midterm) != 1)
                    {
                        printf("Invalid input! Please enter a valid number.\n");
                        while (getchar() != '\n'); 
                        continue;
                    }
                    printf("\n Enter pre-final grade ( 1-5 ):");
                    if (scanf(" %f", &prefinal) != 1)
                    {
                        printf("Invalid input! Please enter a valid number.\n");
                        while (getchar() != '\n'); 
                        continue;
                    }
                    printf("\n Enter final grade ( 1-5 ):");
                    if (scanf(" %f", &final) != 1)
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
                    printf("You PASSED!\n");
                } else if (average > 3.0)
                {
                    printf("You FAILED!\n");
                }
            }else if (userChoice == 4)
            {
                system("cls");
                char str[100];
                int left, right, checker = 0;
                printf("======== PALINDROME CHECKER ========\n");
                printf("\n Enter a word: ");
                scanf(" %99[^\n]", str);
                left = 0;
                right = strlen(str) - 1;
                while (left < right)
                {
                    if (isspace((unsigned char)str[left])) { left++; continue; }
                    if (isspace((unsigned char)str[right])) { right--; continue; }
                    if (tolower((unsigned char)str[left]) != tolower((unsigned char)str[right]))
                    {
                        checker = 1;
                        break;
                    }
                    left++;
                    right--;
                }
                if (checker)
                {
                    printf("%s is not a palindrome.\n", str);
                } else if (!checker)
                {
                    printf("%s is a palindrome.\n", str);
                } 
            }else if (userChoice == 5)
            {
                printf("\nExiting program..!");
                break;
            }else {
                printf("\nInvalid input! Try again!");
            }
        }
        printf("\nPress any Key to continue..");
        while (getchar() != '\n');
        getchar();
    }
    return 0;
}
