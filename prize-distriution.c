#include<stdio.h>
#include<conio.h>
int main()
{
    printf("congrtulations, prize distribution is going on for all students\n");
    printf("Just answer some questions to clame your prize\n");
    int a, b;
    printf("answer 1 if Yes and 0 for No\nOkay. \n");
    printf("Did you pass your science exam (Yes or No)-");
    scanf("%d",&a);
    printf("okay.\nDid you pass your maths exam (Yes or No-");
    scanf("%d",&b);
    printf("thanks for answering :)\n");
    if (a==1 && b==1) {
        printf("congratulations you won a prize money worth rupees 50 :)\n");
    }
    else if (a==1 || b==1) {
        printf("congratulations you won a prize of 15 rupees\n");

    }
    else {
        printf("sorry better luck next time");
    }
}