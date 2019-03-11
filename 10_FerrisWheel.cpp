#include <bits/stdc++.h>

using namespace std;

int N, X, sol;
vector<int> p;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> N >> X;
  p = vector<int>(N, 0);
  for (int i = 0; i < N; i++)
    cin >> p[i];
  
  sort(begin(p), end(p));
  int ptrA = 0, ptrZ = N - 1;
  while (ptrA <= ptrZ) {
    if (ptrA < ptrZ) {
      if (p[ptrA] + p[ptrZ] <= X) {
        ptrA++;
      }
      ptrZ--;
    }
    else {
      ptrA++;
    }
    sol++;
  }
  cout << sol << endl;
  
  return 0;
}
