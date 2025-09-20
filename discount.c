#include <stdio.h>
void main()

{
    char userType; 

    printf("Enter user type (N: New, R: Regular, P: Premium): ");
    scanf(" %c", &userType);

 switch (userType) 
   
    case 'N': printf("You get 5%% discount.\n"); break;

    case 'R': printf("You get 10%% discount.\n"); break;

    case 'P': printf("You get 20%% discount.\n"); break;
    
    default: printf("Invalid user type.\n");
   
}   