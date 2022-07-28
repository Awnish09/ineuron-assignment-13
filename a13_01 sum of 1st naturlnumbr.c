/*recursive function to calculate sum of first N natural numbers*/

#include<stdio.h>
#include<conio.h>

int sumnnnum(int);
int main()
{
    int num, a;
    printf("Enter a number.\n");
    scanf("%d",&num);
    a=sumnnnum(num);
    printf("The sum of 1st %d natural numbers is %d.",num,a);
    getch();
    return 0;
}

int sumnnnum(int x)
{
    int y;
    if(x==0)
        return 0;
    y=x+sumnnnum(x-1);
    return y;
}
