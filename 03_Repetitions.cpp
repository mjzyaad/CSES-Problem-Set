#include <bits/stdc++.h>

using namespace std;

string s;
int maxCount, counter;

int main() {
   cin >> s;
   maxCount = counter = 1;
   for (int i = 1; i < s.size(); i++) {
      if (s[i] == s[i-1]) {
         counter++;
         maxCount = max(maxCount, counter);
      }
      else {
         counter = 1;
      }
   }

   cout << maxCount << endl;

   return 0;
}
