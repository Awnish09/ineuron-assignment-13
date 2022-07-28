/*recursive function to calculate factorial of a given numbers*/

#include<stdio.h>
#include<conio.h>

int factorial(int);
int main()
{
    int num, a;
    printf("Enter a number.\n");
    scanf("%d",&num);
    a=factorial(num);
    printf("The factorial of %d is %d.",num,a);
    getch();
    return 0;
}

int factorial(int x)
{
    int y;
    if(x==1)
        return 1;
    y=x*factorial(x-1);
    return y;
}
