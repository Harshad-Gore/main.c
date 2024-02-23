#include<stdio.h>
int sum(int a , int b)
{
return a+b;
}
int main (){
    int a,b,c;
    printf("Enter the value of A:\n");
    scanf("%d",&a);
    printf("Enter the value of B:\n");
    scanf("%d",&b);
    c=sum(a,b);
    printf("Sum = %d",c);
    return 0;
}