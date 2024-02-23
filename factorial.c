#include <stdio.h> 
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    int n;
     printf("Enter the digit which you want to factorise:\n");
     scanf("%d", &n);
     printf("The factorial of %d is %d", n, factorial(n));
    return 0;
}