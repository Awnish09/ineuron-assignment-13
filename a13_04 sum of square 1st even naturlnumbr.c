/*recursive function to calculate sum of square of first N natural numbers*/

#include<stdio.h>
#include<conio.h>

int sumsqr(int);
int main()
{
    int num, a;
    printf("Enter a number.\n");
    scanf("%d",&num);
    a=sumsqr(num);
    printf("The sum of square of 1st %d natural numbers is %d.",num,a);
    getch();
    return 0;
}

int sumsqr(int x)
{
    int y;
    if(x==0)
        return 0;
    y=x*x+sumsqr(x-1);
    return y;
}
