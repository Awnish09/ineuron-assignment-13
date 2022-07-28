/*a program in C to calculate the power of any number using recursion.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int power(int, int);
int main()
{
    int num, pow, a;
    printf("Enter two numbers.\n");
    scanf("%d %d",&num,&pow);
    a=power(num, pow);
    printf("The value of %d with power %d is %d.",num, pow,a);
    getch();
    return 0;
}

int power(int x, int y)
{
    int a;
    if(y==0)
        return 1;
    a=x*power(x,y-1);
    return a;

}
