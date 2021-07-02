#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define maxN 1000010
vector <int> primes;
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
    int n = 0;
    while (cin >> n) {
        stringstream ss;
        ss << n;
        string istr = "";
        ss >> istr;
        string fstr = "";
        for (int i = istr.size()-1; i >= 0; --i) {
			fstr += istr[i];
        }

		int revN = stoi(fstr);
        bool isNprime = binary_search(primes.begin(), primes.end(), n);
        bool isNemirp = binary_search(primes.begin(), primes.end(), revN);

        if (isNprime) {
            if (n == revN) {
                cout << n << " is prime." << endl;
                continue;
            }
			if (isNemirp) {
				cout << n << " is emirp." << endl;
			} else {
				cout << n << " is prime." << endl;
			}
        } else {
			cout << n << " is not prime." << endl;
        }
    }


}


