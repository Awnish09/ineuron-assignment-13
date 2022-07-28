/*recursive function to calculate sum of digits of a given numbers*/

#include<stdio.h>
#include<conio.h>

int sumdgit(int);
int main()
{
    int num, a;
    printf("Enter a number.\n");
    scanf("%d",&num);
    a=sumdgit(num);
    printf("The sum of the digit of %d is %d.",num,a);
    getch();
    return 0;
}

int sumdgit(int x)
{
    int y;
    if(x==0)
        return 0;
    y=x%10+sumdgit(x/10);
    return y;
}
