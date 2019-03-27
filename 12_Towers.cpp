#include <bits/stdc++.h>

using namespace std;

int N, H;
multiset<int> st;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> H;
    auto ptr = st.upper_bound(H);
    if (ptr != st.end()) {
      st.erase(ptr);
    }
    st.insert(H);
  }
  
  cout << st.size() << endl;
  
  return 0;
}
