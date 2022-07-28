/*recursive function to print first N terms of Fibonacci series*/

#include<stdio.h>
#include<conio.h>

int fibonacci(int);
int main()
{
    int num, a, i;
    printf("Enter a number.\n");
    scanf("%d",&num);
    for(a=1; a<=num; a++)
    {
        i=fibonacci(a);
        printf("%d ",i);
    }
    getch();
    return 0;
}

int fibonacci(int x)
{
    int i;
    if(x==1 || x==0)
        return x;
    i=fibonacci(x-1)+fibonacci(x-2);
    return i;
}
