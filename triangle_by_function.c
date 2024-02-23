#include<stdio.h>
void printstar(int n){
    int i,j;
    for (i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
            for(j=1;j<=2*i-1;j++){
        printf("%c",'*');
            }
            printf("\n");
    }
}
int main()
{
int n;
    printf("Enter the number of stars you want to print:");
    scanf("%d",&n);
        printstar(n);
return 0;
}