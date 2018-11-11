#include <bits/stdc++.h>

using namespace std;

int N, a[555555];
long long r = 0;

int main() {
   scanf("%d", &N);
   for (int i = 0; i < N; i++) {
      scanf("%d", &a[i])      ;
      if (i > 0 && a[i] < a[i-1]) {
         r += a[i - 1] - a[i];
         a[i] = a[i-1];
      }
   }

   printf("%lld\n", r);

   return 0;
}
