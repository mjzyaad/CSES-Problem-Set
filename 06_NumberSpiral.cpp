#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int T, R, C;

int main() {
   scanf("%d", &T);
   for (int i = 0; i < T; ++i) {
      scanf("%d %d", &R, &C);

      ll maxRC = max(R, C);
      ll minRC = min(R, C);
      ll diagonalNode = 1 + maxRC * (maxRC - 1);
      ll diff = maxRC - minRC;

      if (R < C) {
         if (C % 2 == 0) {
            // decreasing
            diagonalNode -= diff;
         }
         else {
            // increasing
            diagonalNode += diff;
         }
      }
      else {
         if (R % 2 == 0) {
            // increasing
            diagonalNode += diff;
         }
         else {
            // decreasing
            diagonalNode -= diff;
         }
      }

      printf("%lld\n", diagonalNode);
   }

   return 0;
}
