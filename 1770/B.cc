#include <iostream>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  int min = 1;
  int max = n;
  for (int i = 1; i <= n; ++i) {
    if (i % 2 == 1) {
      cout << max--;
    } else {
      cout << min++;
    }
    if (i < n) {
      cout << " ";
    } else {
      cout << endl;
    }
  }
}

int main() {
  int re;
  cin >> re;
  while (re--) solve();
}
