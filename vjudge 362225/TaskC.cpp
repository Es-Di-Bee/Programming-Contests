#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>primes;
ll isPrime[100000000];
#define maxN 100000000

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void sieve() {

	isPrime[0] = 1, isPrime[1] = 1;
	for (ll i = 4; i < maxN; i+=2) {
		isPrime[i] =1;
	}
	for (ll i = 3; i*i < maxN; i+=2) {
		if (isPrime[i] == 0) {

			for (ll j = i*i; j < maxN; j+=(i*2)) {
				isPrime[j] = 1;
			}
		}
	}

	for (ll i = 0 ; i < maxN; ++i) {
		if(isPrime[i] == 0) {
			primes.push_back(i);
		}
	}
	
}

int main() {
    fastIO();
    sieve();
    
    ll n;
    while ((cin >> n) && (n > -1)) {
        int index = 0;
        while(primes[index]*primes[index] <= n) {
            while(n % primes[index] == 0) {
                cout << "    " << primes[index] << endl;
                n /= primes[index];
            }
            ++index;
        }
        if(n > 1) cout << "    " << n << endl;
        cout << endl;
    }
}