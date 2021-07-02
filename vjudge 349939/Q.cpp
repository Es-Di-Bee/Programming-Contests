#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxN 1000000
ll isPrime[maxN];
vector <ll> primes;
ll ans[maxN];

void sieve() {

	isPrime[0] = 1, isPrime[1] = 1;
	for (int i = 4; i < maxN; i+=2) {
		isPrime[i] =1;
	}
	for (int i = 3; i*i < maxN; i+=2) {
		if (isPrime[i] == 0) {

			for (int j = i*i; j < maxN; j+=(i*2)) {
				isPrime[j] = 1;
			}
		}
	}

	for (int i = 0 ; i < maxN; ++i) {
		if(isPrime[i] == 0) {
			primes.push_back(i);
		}
	}

}

ll solve(ll n) {
	memset(ans, 0, sizeof(ans));

      int index = 0;
      for (int i = 0; (n > 1) && (primes[i]*primes[i] <= n); ++i) {
		while (n % primes[i] == 0) {
			ans[index]++;
			n /= primes[i];
		}
		if (ans[index] != 0) index++;
      }
      if (n > 1) {
            ans[index++]++;
      }
      int result = 1;
      for (int i = 0; i < maxN; ++i) {
		if (ans[i] == 0) break;
		ans[i]++;
		result *= ans[i];
      }
      return result;
}


int main() {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	sieve();

      int tc = 0;
      cin >> tc;
      ll n = 0;

      for (int t = 1; t <= tc; ++t) {
            cin >> n;

            if (n == 1) {
			cout << "Case " << t << ": 0" << endl;
			continue;
            }

            ll ans = solve(n);

		cout <<  "Case " << t << ": " <<  --ans << endl;
      }
}
