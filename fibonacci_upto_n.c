#include <stdio.h>
int fun(int n){
  int i;
  int t1=0,t2=1;
  int nextTerm = t1 +t2;
 for (i = 4; i <= n; ++i) {
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
    printf("%d\n ", nextTerm);
  }
  return 0;
}
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  // print the first three terms of fibonacci
  printf("Fibonacci Series:\n %d\n %d\n %d\n ", t1, t2, t2);
  fun(n);

}