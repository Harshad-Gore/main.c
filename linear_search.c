#include <stdio.h>
int linearSearch(int *arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {3, 4, 1, 7, 5, 8, 11, 42, 3, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the number you want to search.\n");
    scanf("%d", &key);

    int index = linearSearch(arr, size, key);

    if (index == -1)
    {
        printf("The element is not present in the arr.");
    }
    else
    {
        printf("The element is present at arr[%d].", index);
    }

    return 0;
}