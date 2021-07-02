#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector <int> primes;
#define maxN 10005
int isPrime[maxN];

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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	sieve();
	int tc = 0, m = 0, n = 0;
	cin >> tc;
	for (int t = 1; t <= tc; ++t) {
		cin >> m >> n;
		int ans = 1000000;
		int lastDiv = 0;
		int mCount[maxN] = {0};
		int nCount[maxN] = {0};
		int tempLastDiv = 0;

		int temp = m;
		int j = 0;

		while (isPrime[temp] == 1) {
			if (temp % primes[j] == 0) {
				mCount[j]++;
				temp /= primes[j];
			} else {
				j++;
			}
		}

		if (isPrime[temp] == 0) {
			lastDiv = lower_bound(primes.begin(), primes.end(), temp) - primes.begin();
			mCount[lastDiv]++;
		}

		for (int num = 2; num <= n; ++num) {
			temp = num;
			j = 0;

			while (isPrime[temp] == 1) {
				if (temp % primes[j] == 0) {
					nCount[j]++;
					temp /= primes[j];
				} else {
					j++;
				}
			}

			if (isPrime[temp] == 0) {
				tempLastDiv =  lower_bound(primes.begin(), primes.end(), temp) - primes.begin();
				nCount[tempLastDiv]++;
			}

		}

		for (int i = 0; i <= lastDiv; ++i) {
                  if (mCount[i] == 0) {
				continue;
                  }
                  int x = floor((double)nCount[i] / mCount[i]);
                  if (x == 0) {
				cout << "Case " << t << ":" << "\n" << "Impossible to divide" << "\n";
				break;
                  }
                  if (x < ans) {
				ans = x;
                  }
                  if (i == lastDiv) {
				cout << "Case " << t << ":" << "\n" << ans << "\n";
				break;
                  }
		}


	}
}
