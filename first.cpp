#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

void answer() {
  int input[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 2, 3, 5, 10};
  int diff = 0;
  int min = 200000;
  int size = sizeof(input) / sizeof(input[0]);
  for(int i = 0; i < size; i++) {
    int now = input[i];
    if (i == 0) {
      continue;
    }

    if (min < now && diff < now - min) {
      diff = now - min;
    }
    if (min > now) {
      min = now;
    }
  }

  std::cout << diff << "\n";
}

static const int MAX = 200000;
void solve() {
  int R[MAX], n;

  cin >> n;
  for (int i = 0; i < n; i++) cin >> R[i];

  int maxv = -2000000000;
  int minv = R[0];

  for (int i = 1; i < n; i++) {
    maxv = max(maxv, R[i] - minv);
    minv = min(minv, R[i]);
  }

  cout << maxv << endl;
}

int main() {
  solve();
  return 0;
}
