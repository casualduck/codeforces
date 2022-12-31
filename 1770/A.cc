#include <iostream>
#include <set>
using namespace std;

long long solve(int ri) {
  long long s = 0;

  int n, m;
  cin >> n >> m;
  multiset<int> A;
  for (int i = 1; i <= n; ++i) {
    int a;
    cin >> a;
    A.insert(a);
    s += a;
  }
  for (int j = 1; j <= m; ++j) {
    int b;
    cin >> b;

    auto min_a = *A.begin();
    A.erase(A.begin());
    s -= min_a;

    A.insert(b);
    s += b;
  }
  return s;
}

int main() {
  int re;
  cin >> re;
  for (int ri = 1; ri <= re; ++ri) cout << solve(ri) << endl;
}
