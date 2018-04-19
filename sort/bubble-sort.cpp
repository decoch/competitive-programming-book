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
  int n;
  int array[100];

  scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%d", &array[i]);

  int now = 0;
  while (n > now) {
    for (int i = n - 1; i > now; i--) {
      int v = array[i];
      int j = i - 1;
      if (array[j] > v) {
        array[i] = array[j];
        array[j] = v;
      }
    }
    indicate(n, array);
    now++;
  }
  indicate(n, array);
}

int bubbleSort(int A[], int N) {
  int sw = 0;
  bool flag = 1;
  for (int i = 0; flag; i++) {
    flag = 0;
    for(int j = N - 1; j >= i + 1; j--) {
      if (A[j] < A[j - 1]) {
        swap(A[j], A[j - 1]);
        flag = 1;
        sw++;
      }
    }
  }
  return sw;
}

void solve() {
  int A[100], N, sw;
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];

  sw = bubbleSort(A, N);

  for (int i = 0; i < N; i++) {
    if (i) cout << " ";
    cout << A[i];
  }

  cout << endl;
  cout << sw << endl;
}

int main() {
  solve();
  return 0;
}
