#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxN 1000000
ll isPrime[maxN];
vector <ll> primes;

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

int sum_of_digits(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
	sieve();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tc = 0;
	cin >> tc;
	while (tc--) {
		ll n = 0;
		cin >> n;
        while(true) {
			++n;

			int sumOfn = sum_of_digits(n);
			int sumOfFactorials = 0;
			int temp = n;
			int j = 0, factors = 0;

			while (temp > 1 && primes[j] <= sqrt(temp)) {
                if (temp % primes[j] == 0) {
                    sumOfFactorials += sum_of_digits(primes[j]);
                    temp /= primes[j];
                    factors++;
                }
                else
                    j++;
            }
            if (temp != 1) {
                sumOfFactorials += sum_of_digits(temp);
                factors += 1;
            }

            if (sumOfn == sumOfFactorials && factors > 1) {
                printf("%d\n", n);
                break;
            }

		}

	}
}
