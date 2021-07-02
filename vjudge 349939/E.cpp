#include <bits/stdc++.h>
using namespace std;
#define maxN 1000000

vector<int>v;
int a[maxN];
int ans[maxN];

void sieve() {
	v.push_back(2);
	a[0] = 1, a[1] = 1;
	for (int i = 4; i < maxN; i+=2) {
		a[i] =1;
	}
	for (int i = 3; i*i < maxN; i+=2) {
		if (a[i] == 0) {
			v.push_back(i);
			for (int j = i*i; j < maxN; j+=(i*2)) {
				a[j] = 1;
			}
		}
	}
}

void preCalculate() {
	for (int i = 2; i <= maxN; ++i) {
		ans[i] = ans[i-1];
		if(a[i] == 0) {
			ans[i]++;
		} else {
			int temp = i;
			while (temp != 1) {
				for (int j = 0; j < v.size(); ++j) {
					if (a[temp] == 0) {
						ans[i]++;
						temp = 1;
						break;
					}
					if (temp % v[j] == 0) {
						ans[i]++;
						temp /= v[j];
						break;
					}
				}
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	sieve();
	preCalculate();

	int n = 0;

	while(cin >> n) {
		cout << ans[n] << endl;
	}

}

