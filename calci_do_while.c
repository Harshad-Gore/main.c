#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,result,n;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second numbeer :");
    scanf("%d",&b);
 do {
         printf("\nTo perform Addition press 1");    
         printf("\nTo perform Subtraction press 2");
         printf("\nTo perform Division press 3 ");
         printf("\nTo perform Multiplication press 4 ");
         printf("\nTo exit press 0");
         printf("\nEnter your choice:");
         scanf("%d",&n);
        switch (n)
        {
        case 0:
        break;

        case 1:
        result = a+b;
        printf("Addition = %d\n",result);
        break;

        case 2:
        result = a-b;
        printf("Subtraction = %d\n",result);
        break;

        case  3:
        result = a/b;
        printf("Division = %d\n",result);
        break;

        case  4:
        result = a*b;
        printf("Multiplication = %d\n",result);
        break;

        default :
        printf("You have entred wrong choice\n");  
        }  
    } while (n!=0);

    return 0;
}   