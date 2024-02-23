#include<stdio.h>
void swap(int a, int b){
    int temp =a;
    a=b;
    b=temp;
    printf("%d is first number and %d is the second number after swaping.",a,b);
}
int main()
{
 int first,second;
 printf("Enter the first number:\n");
 scanf("%d",&first);
 printf("Enter the second numberr:\n");
 scanf("%d",&second);
 printf("%d is first number and %d is the second number before swaping.\n",first,second);
 swap(first,second);
return 0;
}