#include <stdio.h>
#include <string.h>
void fun(char a[10],char b[10]){
    char string0,string1;
 printf("%d\n", strlen(string0));
    printf("%d\n", strlen(string1));
}

int main()
{
    char string0[30];
    char string1[30];
    printf("Enter the string.\n");
    scanf("%[^\n]s",string0);
    printf("%[^\n]s\n", string0);
    printf("Enter the second string.\n");
    scanf("%[^\n]s",string1);
    printf("%[^\n]s\n", string1);
   /* printf("%d\n", strlen(string0));
    printf("%d\n", strlen(string1));
    printf("%[^\n]s\n", strcpy(string0, string1));
    printf("%[^\n]s\n", strcmp(string0, string1));
    printf("%[^\n]s\n", strcat(string0, string1));
    printf("%[^\n]s\n", strstr(string0, string1));*/
    fun(string0,string1);
    return 0;
}