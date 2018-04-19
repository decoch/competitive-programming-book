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

void solve() {
}

int main() {
  answer();
  return 0;
}
