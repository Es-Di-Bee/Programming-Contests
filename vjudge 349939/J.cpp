#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve (ll n) {
	ll ans = n;
	for (ll i = 2; i*i <= n; ++i) {
		if (n % i == 0) {
			while (n % i == 0) {
				n /= i;
			}
			ans -= (ans / i);
		}
	}
	if (n > 1) ans -= (ans / n);
	return ans;
}


int main() {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	ll n = 0;
	while(scanf("%lld",&n) && n ) {
            if (n == 1) cout << "0" << endl;
            else cout << solve(n) << endl;
	}
}

