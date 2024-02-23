#include<stdio.h>
int main()
{
int A,B,C,D;
printf("Enter the value of A:\n");
scanf("%d",&A);
printf("Enter the value of B:\n");
scanf("%d",&B);
printf("Enter the value of C:\n");
scanf("%d",&C);
printf("Enter the value of D:\n");
scanf("%d",&D);
if(A>B&&A>C&&A>D){

printf("%d is the greatest",A);

}
if(B>A&&B>C&&B>D){

printf("%d is the greatest",B);

}
if(C>B&&C>D&&C>A){

printf("%d is the greatest",C);

}
else  {

printf("%d is the greatest",D);

}
return 0;
}