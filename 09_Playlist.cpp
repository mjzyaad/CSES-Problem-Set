#include <bits/stdc++.h>

using namespace std;

int N, x, maxSize;
set<int> st;
deque<int> dq;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> x;
    if (st.count(x)) {
      while (dq.size() && dq.back() != x) {
        st.erase(dq.back());
        dq.pop_back();
      }
      dq.pop_back();
    }
    st.insert(x);
    dq.push_front(x);
    maxSize = max(maxSize, (int)dq.size());
  }
  cout << maxSize << endl;
  
  return 0;
}
