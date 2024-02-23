#include <stdio.h>
int function(int a)
{
    int b, c, s = 0;
    b = a;
    while (a != 0)
    {
        c = a % 10;
        s = (s * 10) + c;
        a = a / 10;
    }
    if (s == b)
        return 0;
    else
        return 1;
}
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    if (function(a) == 0)

    {
        printf("Is a palidrome number", a);
    }
    else
    {
        printf("Not a palidrome number", a);
    }
    return 0;
}