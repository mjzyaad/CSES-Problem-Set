#include <bits/stdc++.h>

using namespace std;

int N;

int main() {
   cin >> N;

   if (N == 1)
      cout << "1" << endl;
   else if (N < 4)
      cout << "NO SOLUTION" << endl;
   else if (N == 4)
      cout << "3 1 4 2" << endl;
   else if (N == 5)
      cout << "1 3 5 2 4" << endl;
   else {
      if (N % 2)
         printf ("%d ", N--);

      int half = N / 2;
      for (int i = 1; i <= half; i++) {
         printf ("%d %d ", i, i + half);
      }
      cout << endl;
   }

   return 0;
}
