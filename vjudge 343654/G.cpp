#include<bits/stdc++.h>
using namespace std;
unsigned long long int  arr[10000000];
long int divisor = 1, fact[100000];
vector<unsigned long long int>primes;
vector< long long int>factors;

void sieve() {
    unsigned long long int N = 65536;
    unsigned long long int k = N;
    for(unsigned long long int i = 3; i <= k; i += 2) {
        if(arr[i]==0) {
            for(unsigned long long int j = i*i; j <= N; j+=2*i) {
                arr[j] = 1;
            }
        }
    }
    arr[1] = 1;
    for(unsigned long long int i = 4; i <= N; i += 2) {
        arr[i] = 1;
    }

    primes.push_back(2);
    for(unsigned long long int i = 3; i <= N; i+=2) {
        if(arr[i]==0) primes.push_back(i);
    }
}

void factorials(unsigned long long int n)
{
    int j = 1; // working as boolean
    for(unsigned long long int i = 0; i < primes.size() && n!=1; ++i) {
        if(n % primes[i] == 0) {
            while(n % primes[i] == 0) {
                j = 0;
                n = n/primes[i];
                factors.push_back(primes[i]);
            }
        }
    }
    if(n != 1) factors.push_back(n);
    if(j != 0 && n == 1) factors.push_back(n);
}
int main() {
    sieve();
    long long int n, i, sp = 0, m;
    while(scanf("%lld",&n)==1) {
        m = n;
        if(m == 0) break;
        if(m < 0) {
            m = -1 * m;
            factors.push_back(-1);
        }
        factorials(m);
        for(i = 0; i < factors.size(); i++) {
            if(i == 0) {
                printf("%lld = %lld",n,factors[i]);
            } else {
                printf(" x %lld",factors[i]);
            }
        }
        printf("\n");
        factors.clear();
    }
    return 0;
}
