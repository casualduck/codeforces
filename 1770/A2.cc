#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

long long solve() {
  int n, m;
  cin >> n >> m;
  vector<int> v;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  for (int j = 0; j < m; ++j) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.begin() + n + m - 1);
  long long tot = 0;
  for (int i = 0; i < n; ++i) {
    tot += v[n + m - 1 - i];
  }
  return tot;
}

int main() {
  int re;
  cin >> re;
  while (re--) cout << solve() << endl;
}
