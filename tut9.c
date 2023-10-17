#include<stdio.h>
#include<conio.h>
int main()
{
    int a , b, diff ;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number =");
    scanf("%d" , &b);
    diff = a - b;
    printf("%d - %d =  %d ", a , b, diff);
    getch();
}