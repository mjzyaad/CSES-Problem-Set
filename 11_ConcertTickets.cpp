#include <bits/stdc++.h>

using namespace std;

int N, M, ticket;
vector<int> maxPrice;
multiset<int> st;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> N >> M;
  maxPrice = vector<int>(M, 0);
  for (int i = 0; i < N; i++) {
    cin >> ticket;
    st.insert(ticket);
  }
  for (int i = 0; i < M; i++)
    cin >> maxPrice[i];
  
  for (auto x : maxPrice) {
    if (st.begin() == st.end()) {
      cout << -1 << endl;
    }
    else {
      auto ptr = st.lower_bound(x);
      if (*ptr == x) {
        cout << x << endl;
        st.erase(ptr);
      }
      else if (ptr == st.begin()) {
        cout << -1 << endl;
      }
      else {
        ptr--;
        cout << *ptr << endl;
        st.erase(ptr);
      }
    }    
  }
  
  return 0;
}
