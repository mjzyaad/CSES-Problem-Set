#include <bits/stdc++.h>

using namespace std;

int n, m;
string a[2555];

void Input() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
      cin >> a[i];
  }
}

void dfs(int i, int j) {
  if (i < 0 || j < 0 || i >= n || j >= m || a[i][j] != '.')
    return;
  
  a[i][j] = 'x';
  dfs(i - 1, j);
  dfs(i + 1, j);
  dfs(i, j - 1);
  dfs(i, j + 1);
}

int Solve() {
  int sol = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == '.') {
        sol++;
        dfs(i, j);
      }
    }
  }
  return sol;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  Input();
  cout << Solve() << endl;
  
  return 0;
}
