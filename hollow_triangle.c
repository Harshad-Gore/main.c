#include<stdio.h>
int main() {
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++) {
        for(j=i; j<rows; j++) {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++) {
            if(i==rows || j==1 || j==(2*i-1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}