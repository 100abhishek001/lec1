#include<stdio.h>
#include<conio.h>
int main()
{
    int first, second, third, choice;
    printf("Lucky draw is going on in your schoool\n");
    printf("participation fee is 50 rupees\nDo you want to play (1 for Yes and 0 for No)\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            printf("Thanks for playing\nHere are rulls\n");
            printf("You will get three chances to choose a number and if you choose LUCKY number\nthen you will be announced as a winner");
            printf("\nLets start the game\nEnter first number = ");
            scanf("%d",&first);
            switch (first)
            {
                case 7:
                    printf("\nCongratulation you have choose LUCKY number\nYou won a prize of $50,000 :)\n");
                    break;
                default:
                    printf("\nOhh, that was not the LUCKY number\nTry again\nEnter second number = ");
                    scanf("%d",&second);
                    switch(second)
                    {
                        case 7:
                            printf("\nCongratulation you have choose LUCKY number\nYou won a prize of $50,000 :)\n");
                            break;
                        default:
                            printf("\nOh No that was also not a lucky number\n");
                            printf("No problem you still have one last try\n");
                            printf("Enter third number = ");
                            scanf("%d",&third);
                            switch (third)
                            {
                                case 7:
                                    printf("Congratulation you have choose LUCKY number\nYou won a prize of $50,000 :)\n");
                                    break;
                            
                                default:
                                    printf("Sorry but you are just unlucky. well you can play again just pay participation free again\nThanks for playing");
                                    break;
                            } 
                            break;      
                    }
                    break;
            }
            break;
        default:
            printf("Okay no problem, you can play any time :) BYE");
            
        
    }

}