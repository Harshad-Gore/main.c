#include <stdio.h>
int prime(int num)
{
    int i;
    for (i = 2; i <= (num / 2); i++)
    {
        if (num % i != 0)
            continue;
        else
            return 1;
    }
    return 0;
}
int main()
{
    int n, a = 0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    a = prime(n);
    if (a == 0)
        printf("The number is prime");
    else
        printf("The number is not prime");
    return 0;
}