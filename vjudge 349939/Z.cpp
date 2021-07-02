#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

      ll p = 0, q = 0, x = 0, k = 0;
      int tc = 0;
      cin >> tc;

      while (tc--) {
            cin >> x >> k;
           	p = ( ceil((double)x/k) * k ) - x;
            q = k - p;
            cout << p << " " << q << endl;
      }
}
