#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;

int main() {
   cin >> n;

   do {
      cout << n << " ";
      if (n == 1) break;
      if (n % 2 == 0)
         n /= 2;
      else
         n = n * 3 + 1;
   } while (true);

   return 0;
}
