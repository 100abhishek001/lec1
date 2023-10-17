#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, d, e, avg;
    printf("Enter marks in following subjects\n");
    printf("Enter markd in first subjects = ");
    scanf("%d",&a);
    printf("Enter markd in second subjects = ");
    scanf("%d",&b);
    printf("Enter markd in third subjects = ");
    scanf("%d",&c);
    printf("Enter markd in fourth subjects = ");
    scanf("%d",&d);
    printf("Enter markd in fifth subjects = ");
    scanf("%d",&e);
    avg = (a + b + c + d + e)/5;
    printf("Aversge marks of all subjects is = %d",avg);
    getch();
} 