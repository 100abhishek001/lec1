#include<stdio.h>
#include<conio.h>
int main()
{
    int a, temp;
    printf("Enter temprature in celsius =");
    scanf("%d",&a);
    temp = (a*9/5) + 32;
    printf("%d'C in fehrenheit is = %dF", a,temp);
    getch();


}