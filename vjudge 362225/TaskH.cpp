#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>primes;
ll isPrime[100000];
#define maxN 33000
vector<int>v;

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
			primes.push_back((int)i);
		}
	}
	
}

bool checkPrime(int n) {
    if (binary_search(primes.begin(), primes.end(), n)) return true;
    return false;
}

void print(int l, int r) {
    int checkH = v.back() + (v[1]-v[0]);
    int checkL = v[0] - (v[1]-v[0]);
    if (checkH > primes[r] && checkPrime(checkH) || checkL < primes[l] && checkPrime(checkL)) {
        v.clear();
        return;
    }
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i != v.size()-1) cout << " ";
    }
    cout << endl;
    v.clear();
}

int main() {
    fastIO();
    sieve();
    
    int x = 0, y = 0;
    while ((cin >> x >> y) && (x != 0 || y != 0)) {
        if(x > y) swap(x, y);
        int l = lower_bound(primes.begin(), primes.end(), x) - primes.begin();
        int r = lower_bound(primes.begin(), primes.end(), y) - primes.begin();
        if (binary_search(primes.begin(), primes.end(), y) == false) --r; 
        
        bool firstTime = true;
        for (int i = l; i <= r-2; ++i) {
            if ( (primes[i+1] - primes[i]) == (primes[i+2] - primes[i+1]) ) {
                if(firstTime) {
                    v.push_back(primes[i]);
                    v.push_back(primes[i+1]);
                    v.push_back(primes[i+2]);
                    firstTime = false;
                } else {
                    v.push_back(primes[i+2]);
                }
            } else {
                 firstTime = true;
                if (!v.empty()) {
                    print(l, r);
                }
            }
        }
        if(v.empty() == false) print(l, r);
        v.clear();
    }

}