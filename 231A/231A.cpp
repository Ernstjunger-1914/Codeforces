#include <bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)

using namespace std;
using ll = long long;

int main() {
  ioboost;

  int cnt = 0, a, b, c, n;
  cin>>n;

  for(int i = 0; i < n; i++) {
    cin >> a >> b >> c;
    if (a == 1) {
      if (b == 1 || c == 1) cnt++;
    } else if (b == 1 && c == 1) {
      cnt++;
    }
  }
  cout << cnt << "\n";

  return 0;
}