#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[26] = {
		2,
		3,
		5,
		7,
		11,
		13,
		17,
		19,
		23,
		29,
		31,
		37,
		41,
		43,
		47,
		53,
		59,
		61,
		67,
		71,
		73,
		79,
		83,
		89,
		97,
		101
	};

	int n = 0;
	int tc = 0;
	cin >> tc;
	for(int t = 1; t <= tc; ++t)  {
		cin >> n;
		int ans[105] = {0};
		for (int i = 2; i <= n; ++i) {
			int temp = i;
			while (temp != 1) {
				for (int j = 0; j < 26; ++j) {
					if (temp % a[j] == 0) {
						ans[a[j]]++;
						temp /= a[j];
						break;
					}
				}
			}
		}

		int num2 = 0;
		if (binary_search(a, a+26, n)) {
			num2 = lower_bound(a, a+26, n)-a;
		} else {
			num2 = lower_bound(a, a+26, n)-a-1;
		}

		printf("Case %d: %d = ", t, n);

		for (int num1 = 0; num1 <= num2; ++num1) {
			printf("%d (", a[num1]);
			printf("%d)", ans[a[num1]]);
			if (num1 != num2) printf(" * ");
		}
		printf("\n");
	}
}
