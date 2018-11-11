#include <bits/stdc++.h>

using namespace std;

int N, x;
bitset<555555> b;

int main() {
   scanf("%d", &N);
   for (int i = 0; i < N - 1; i++) {
      scanf("%d", &x);
      b[x] = true;
   }

   for (int i = 1; i <= N; i++)
      if (b[i] == false)
         printf("%d\n", i);

   return 0;
}
