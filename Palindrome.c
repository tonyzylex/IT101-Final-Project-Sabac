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

        } else if (userChoice == 4) // Palindrome Checker 
        { 
            char str[100];
            int i, length, flag = 0;
            printf("======== PALINDROME CHECKER ========\n");
            printf("\n Enter a word: ");
            scanf(" %[^\n]s", str);
            length = 0;
            while (str[length] != '\0')
            {
                length++;
            }
            for (i = 0; i < length / 2; i++)
            {
                if (str[i] != str[length - i - 1])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                printf("%s is not a palindrome.\n", str);
            } else
            {
                printf("%s is a palindrome.\n", str);
            }
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
