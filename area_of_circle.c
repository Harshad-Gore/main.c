#include<stdio.h>
int main()
{
float pi;
float area;
float r;
pi = 3.14159265;
printf("Enter the Radius of circle:\n");
scanf("%f",&r);
area=pi*r*r;
printf("%f is the are of circle having radius %f",area,r);
return 0;
}