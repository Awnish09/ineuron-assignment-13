/*recursive function to calculate sum of first N even natural numbers*/

#include<stdio.h>
#include<conio.h>

int sumnevennum(int);
int main()
{
    int num, a;
    printf("Enter a number.\n");
    scanf("%d",&num);
    a=sumnevennum(num);
    printf("The sum of 1st %d even natural numbers is %d.",num,a);
    getch();
    return 0;
}

int sumnevennum(int x)
{
    int y;
    if(x==0)
        return 0;
    y=2*x+sumnevennum(x-1);
    return y;
}
