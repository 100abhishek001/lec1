#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, multi;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    multi = a * b;
    printf("%d X %d = %d", a, b, multi);
    getch();
}