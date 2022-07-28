/*program to count the digits of a given number using recursion.*/

#include<stdio.h>
#include<conio.h>

int digitcount(int);
int main()
{
    int num, a;
    printf("Enter a number.\n");
    scanf("%d",&num);
    a=digitcount(num);
    printf("There are %d digits in %d.",a, num);
    getch();
    return 0;
}

int digitcount(int x)
{
    int a;
    if(x==1||x==0)
        return 0;
    a=1+digitcount(x/10);
    return a;
}
