#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

void indicate(int n, int array[]) {
  for (int i = 0; i < n; i++) {
    printf(" ");
    printf("%d", array[i]);
  }
  printf("\n");
}

void answer() {
  int array[100], n;

  cin >> n;
  for (int i = 0; i < n; i++) cin >> array[i];

  for (int i = 0; i < n; i++) {
   int min = i;

   for (int j = i + 1; j < n; j++) {
     if (array[min] > array[j]) {
       min = j;
     }
   }
   int v = array[min];
   array[min] = array[i];
   array[i] = v;
   indicate(n, array);
  }
}

void correct() {
  int A[100], N;
  int i, j, t, sw = 0, minj;
  for (int i = 0; i < N; i++) {
    minj = i;
    for (int j = 0; j < N; j++) {
      if (A[j] < A[minj]) minj = j;
    }
    t = A[i]; A[i] = A[minj]; A[minj] = t;
  }
}

int main() {
  answer();
  return 0;
}
