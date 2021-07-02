#include <bits/stdc++.h>
using namespace std;
#define maxN 1000005
int isPrime[maxN];
vector <int> primes;
vector <int> dif;


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

void preCalculate() {
	for (int i = 0; i < primes.size()-1; ++i) {
            dif.push_back(primes[i+1] - primes[i]);
	}
}

int main() {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	sieve();
	preCalculate();

	int tc = 0;
	cin >> tc;
	while (tc--) {
            int l = 0, u = 0;
            int ans[300] = {0};

            cin >> l >> u;

            if (l == u) {
			cout << "No jumping champion" << endl;
			continue;
            }

            int ind1 = 0, ind2 = 0;
		ind1 = lower_bound(primes.begin(), primes.end(), l) - primes.begin();
		if (binary_search(primes.begin(), primes.end(), u)) {
            	ind2 = lower_bound(primes.begin(), primes.end(), u) - primes.begin()-1;
		} else {
			ind2 = lower_bound(primes.begin(), primes.end(), u) - primes.begin()-2;
		}

		if(ind1 > ind2) {
			cout << "No jumping champion" << endl;
			continue;
		}

		//cout << ind1 << " " << ind2 << endl;


		for (; ind1 <= ind2; ++ind1) {
			ans[dif[ind1]]++;
		}

		int max = 0;
		int answer = 0;
		bool repeat = false;

            for (int i = 0; i < 300; ++i) {
			if (ans[i] > max) {
                        max = ans[i];
                        answer = i;
                        repeat = false;
                        continue;
			}
			if (ans[i] == max) {
				repeat = true;
			}
            }

            if(repeat) {
			cout << "No jumping champion" << endl;
            } else {
            	cout << "The jumping champion is " << answer << endl;
            }
	}
}
