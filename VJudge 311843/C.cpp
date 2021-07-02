#include <iostream>
#include <cstdio>
#include<algorithm>
#include<deque>
using namespace std;
deque<int>p;
deque<int>q;
int a[1000006], maxn[1000006];

int main() {
    int n, k;
	cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; ++i) {
        while (!p.empty() && a[i] < a[p.back()]) {
			p.pop_back();
        }
        p.push_back(i);
        if (i-p.front() == k) {
			p.pop_front();
        }
        if (i >= k) {
			printf("%d ", a[p.front()]);
        }
    }
    printf("\n");

	for (int i = 1; i <= n; ++i) {
        while (!q.empty() && (a[q.back()] < a[i])) {
			q.pop_back();
        }
        q.push_back(i);
        if (i-q.front() == k) {
			q.pop_front();
        }
        if (i >= k) {
			printf("%d ", a[q.front()]);
        }
    }
    return 0;

}
