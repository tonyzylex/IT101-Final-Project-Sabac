#include <stdio.h>
#include <stdlib.h>


int main(){
    char returnMenu = 'y';
    while (returnMenu != 'n')
    {
        system("cls");
        int userChoice = 0;
        printf("\n=====================================================\n");
        printf("Welcome to C-ToolKit!");
        printf("\n=====================================================");
        printf("\n[1] = The Pattern Generator");
        printf("\n[2] = Pascals Triangle");
        printf("\n[3] = Grade Calculator & Evaluator");
        printf("\n[4] = Palindrone Checker");
        printf("\n[5] = Exit program");
        printf("\nChoose option(1-5):");
        scanf("%d",&userChoice);
        

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
            scanf("%d",&shapeInput);
            
            if (shapeInput == 1)
            {
                printf("You have selected [Right Triangle]");
                printf("\nInput size:");
                scanf("%d",&size);
                printf("\nOutput:\n");

                for (l1 = 0; l1 < size; l1++)
                {
                    for (l2 = 0 ; l2 <= l1; l2++)
                    {
                        printf("* ");
                    }
                          
                    printf(" \n");   
                }  
                
            }else if (shapeInput == 2){
                printf("You have selected [Square]");
                printf("\nInput size:");
                scanf("%d",&size);
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
            else if (shapeInput == 3)
            {
                printf("You have selected [Isosceles Triangle]");
                printf("\nInput size:");
                scanf("%d",&size);
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
            }else if (shapeInput == 4)
            {
                printf("You have selected [Inverted Right Triangle]");
                printf("\nInput size:");
                scanf("%d",&size);
                printf("\nOutput:\n");

                for (l1 = size; l1 >= 1; l1--)
                {   
                    for ( l3 = l1; l3 >= 1 ; l3--)
                    {
                        printf("* ");
                    }
                    printf(" \n");   
                }
            }else if (shapeInput == 5){
                printf("You have selected [Christmas Tree]");
                printf("\nInput size:");
                scanf("%d",&size);
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
                

            }else {printf("Invalid input!");}
            
            
            
            
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
            break;
        }else {
            printf("\nInvalid input! Try again!");
        }

        printf("return to main menu?(y/n):");
        scanf(" %c",&returnMenu);
    }
    
    
    
    return 0;
}