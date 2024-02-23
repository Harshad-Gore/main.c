#include <stdio.h>

int binarySearch(int array[], int x, int low, int high)
{
  // Repeat until the pointers low and high meet each other
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    // if element is found at mid
    if (array[mid] == x)
      return mid;
    // if element is greater than mid
    if (array[mid] < x)
      low = mid + 1;
    // non of the conditions match
    else
      high = mid - 1;
  }

  return -1;
}
// Driver code
int main(void)
{
  int array[5];
  int n = sizeof(array) / sizeof(array[0]);
  int x;
  int i;
  for (i = 0; i <= n; i++)
  {
    printf("Element number %d.\n", i+=1);
    scanf("%d", &array[i]);
  }
  printf("Enter the number you want to search.\n ");
  scanf("%d", &x);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}