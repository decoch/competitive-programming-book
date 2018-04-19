#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

void answer() {
  int n;
  int array[100];

  scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%d", &array[i]);

  // show default
  for(int i = 0; i < n; i++) cout << array[i];
  cout << endl;

  for (int i = 1; i < n; i++) {
    int v = array[i];
    int j = i - 1;
    while (j >= 0 && array[j] > v) {
      array[j + 1] = array[j];
      j--;
      // show changed
    }
    array[j+1] = v;
    for(int i = 0; i < n; i++) cout << array[i];
    cout << endl;
  }

  cout << endl;
}

void trace(int A[], int N) {
  int i ;
  for (i = 0; i < N; i++) {
    if (i > 0) printf(" ");
    printf("%d", A[i]);
  }
  printf("\n");
}

void insertionSort(int A[], int N) {
  int j, i, v;
  for (i = 1; i < N; i++) {
    v = A[i];
    j = i - 1;
    while(j >= 0 && A[j] > v) {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = v;
    trace(A, N);
  }
}

void solve() {
  int N, i, j;
  int A[100];

  scanf("%d", &N);
  for (i = 0; i < N; i++) scanf("%d", &A[i]);

  trace(A, N);
  insertionSort(A, N);
}

int main() {
  solve();
  return 0;
}
