#include<stdio.h>
int main()
{
int i, start,end,sum=0;
printf("Enter the starting number: \n");
scanf("%d",&start);
printf("Enter the ending number: \n");
scanf("%d",&end);
//if the entered number is even then make it odd
if (start%2==0){
    start++ ;
}
for(i=start;i<=end;i+=2){
    sum+=i;
}
printf("The sum of odd numbers in range of %d to %d is = %d",start,end,sum);
return 0;
}