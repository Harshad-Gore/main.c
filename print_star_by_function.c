#include<stdio.h>
void printstar(int n){
    int i;
    for (i=0;i<=n;i++){
        printf("%c",'*');
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