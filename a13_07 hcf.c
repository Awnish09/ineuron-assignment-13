/*recursive function to calculate HCF of two numbers*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int hcf(int, int);
int main()
{
    int num1, num2, a;
    printf("Enter two numbers.\n");
    scanf("%d %d",&num1,&num2);
    a=hcf(num1, num2);
    printf("The HCF of %d and %d is %d.",num1, num2,a);
    getch();
    return 0;
}

int hcf(int y, int x)
{
    if(x==0)
        return y;
    else if(y==0)
        return x;
    else
        hcf(x, y%x);
}
