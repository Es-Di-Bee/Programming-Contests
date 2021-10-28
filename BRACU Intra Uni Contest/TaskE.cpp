#include <bits/stdc++.h>
using namespace std;
int b[1000000];

int main() {

	int n;
	cin >> n;
	int a[n] = {0};

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	sort(a, a+n);

	int box = 0;

	//int b[n] = {0};
	int c = 0;

	for (int i = 0; i < n-1; ++i) {
		if (a[i] < a[i+1]) {
			b[c] = b[c]+1;
			++c;
		} else if (a[i] == a[i+1]) {
			b[c] = b[c] + 1;
			//cout << "OK" << c << endl;
		}
	}
	if (a[n-1] == a[n-2]) {
		//--c;
		b[c] = b[c]+1;
	} else {
		//++c;
		b[c] = b[c]+1;
	}

	//for (int i = 0; i < 1000000; ++i) {
		//if (b[i] == 0) break;
		//cout << b[i] << endl;
		//b[i] = b[i] - b[i+1];
	//}

	for (int i = 0; i < 1000000; ++i) {
		if (b[i] > box) box = b[i];
	}

	cout << box << endl;

}
