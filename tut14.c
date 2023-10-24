#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 45;
    float b = 4.56;
    int age;
    //printf("int is = %d\n",a);
    //printf("float is =%-9.2fg",b);
    //printf("this \t \b is \a my \\\\\\\\\\\\ code.");
    printf("Enter your age");
    scanf("%d",&age);
    printf("you have entered %d as you age\n",age);
    if (age>18)
    {
        printf("you are elegeble to vote");
    }
    else
    {
        printf("you are not elegeble to vote");
    }
    
    return 0;
}