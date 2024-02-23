#include <stdio.h>
struct student
{
    int prn;
    char name[30];
    char branch[30];
    int roll;
    char div[10];
};
int main()
{
    struct student harshad, abhinav;
    printf("Enter the name of student.\n");
    scanf("%s", &harshad.name);
    printf("Enter the name of branch.\n");
    scanf("%s", &harshad.branch);
    printf("Enter the roll number.\n");
    scanf("%d", &harshad.roll);
    printf("Enter your division.\n");
    scanf("%s", &harshad.div);
    printf("%s\n", harshad.name);
    printf("%s\n", harshad.branch);
    printf("%d\n", harshad.roll);
    printf("%s\n", harshad.div);
    printf("Enter the name of student.\n");
    scanf("%s", &abhinav.name);
    printf("Enter the name of branch.\n");
    scanf("%s", &abhinav.branch);
    printf("Enter the roll number.\n");
    scanf("%d", &abhinav.roll);
    printf("Enter your division.\n");
    scanf("%s", &abhinav.div);
    printf("%s\n", abhinav.name);
    printf("%s\n", abhinav.branch);
    printf("%d\n", abhinav.roll);
    printf("%s\n", abhinav.div);
    return 0;
}