#include<stdio.h>
int fibonacciTerm(int n)
{
   int a=0, b=1, c;
   for(int i=1; i<n; i++)
   {
     c = a+b;
     a = b;
     b = c;
   }
   return a;
}

int main()
{
   int term, result;

   printf("Enter term to find: ");
   scanf("%d", &term);

   result = fibonacciTerm(term);

   printf("The fibonacci term is: %d", result);

   return 0;
}