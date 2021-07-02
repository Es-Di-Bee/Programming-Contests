#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxN 1000000
ll isPrime[maxN];
vector <ll> primes;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tc = 0;
	cin >> tc;
	ll p = 0, l = 0;

	for (int  t = 1; t <= tc; ++t) {
		vector <ll> factors;
		cin >> p >> l;
		ll eaten = p - l;
		if (eaten == 1) {
			if (eaten > l) printf("Case %d: 1\n", t);
			else printf("Case %d: impossible\n", t);
			continue;
		}

		for (int i = 1; i < (int) sqrt(eaten) + 1; i++) {
			if (eaten % i == 0) {
				if (i*i != eaten) {
					factors.push_back(i);
					factors.push_back(eaten/i);
				} else {
					factors.push_back(i);
				}
			}
		}
		sort(factors.begin(), factors.end());

		printf("Case %d: ", t);
		bool flag = false;
		for (int i = 0; i < factors.size(); ++i) {
			if (factors[i] > l) {
				flag = true;
				//cout << factors[i] << " ";
				printf("%lld", factors[i]);
				if (i != factors.size()-1) printf(" ");
			}
			if (i == factors.size()-1 && flag == false)  printf("impossible");
		}

		printf("\n");
	}
}




