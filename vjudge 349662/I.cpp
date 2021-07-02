#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

      int n = 0;
      cin >> n;
      char c;
      vector <char> v;
      for (int i = 0; i < n; ++i) {
		cin >> c;
            if (v.size() == 0) {
            	v.push_back(c);
			continue;
            }
            if (c == v[v.size()-1]) {
      		v.push_back(c);
            } else {
            	v.erase(v.begin()+v.size()-1);
            }
      }
      int ans = v.size();

	cout << ans << endl;
      //for (int i = 0, j = i+1; j < v.size(); ++i, ++j) {

      //}
}
