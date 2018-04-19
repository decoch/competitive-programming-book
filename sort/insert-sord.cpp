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

void solve() {
}

int main() {
  answer();
  return 0;
}
