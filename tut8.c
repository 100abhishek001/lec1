#include<stdio.h>
#include<conio.h>
int main()
{
    int a , b, sum ;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number =");
    scanf("%d" , &b);
    sum = a + b;
    printf("%d + %d = %d ", a , b, sum);
    getch();
}