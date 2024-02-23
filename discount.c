#include<stdio.h>
int main()
{
float discount, gst, price,total;
printf("Enter the printed price:\n");
scanf("%f",&price);
printf("Amount of discount on product:\n");
scanf("%f",&discount);
printf("Enter the amount of gst on discounted price:\n");
scanf("%f",&gst);
printf("%f rs. off on price of %f\n",(discount*price)/100,price);
int result = (discount*price)/100;
printf("Amount of GST tax : %f\n",(gst*result)/100);
int result1=(gst*result)/100;
total = price - result + result1 ;
printf("Total amount : %f\n",total);
return 0;
}