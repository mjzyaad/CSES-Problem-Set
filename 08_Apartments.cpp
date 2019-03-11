#include <bits/stdc++.h>

using namespace std;

int N, M, K, sol;
vector<int> a, b;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> N >> M >> K;
  a = vector<int>(N, 0);
  b = vector<int>(M, 0);
  for (int i = 0; i < N; i++) cin >> a[i];
  for (int i = 0; i < M; i++) cin >> b[i];
  
  sort(begin(a), end(a));
  sort(begin(b), end(b));

  while (a.size() && b.size()) {
    if (abs(a.back() - b.back()) <= K) {
      a.pop_back();
      b.pop_back();
      sol++;
    }
    else if (a.back() > b.back()) {
      a.pop_back();
    }
    else {
      b.pop_back();
    }
  }
  cout << sol << endl;
  
  return 0;
}
