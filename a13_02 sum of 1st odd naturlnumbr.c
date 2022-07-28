/*recursive function to calculate sum of first N odd natural numbers*/

#include<stdio.h>
#include<conio.h>

int sumnoddnum(int);
int main()
{
    int num, a;
    printf("Enter a number.\n");
    scanf("%d",&num);
    a=sumnoddnum(num);
    printf("The sum of 1st %d odd natural numbers is %d.",num,a);
    getch();
    return 0;
}

int sumnoddnum(int x)
{
    int y;
    if(x==1)
        return 1;
    y=2*x-1+sumnoddnum(x-1);
    return y;
}
