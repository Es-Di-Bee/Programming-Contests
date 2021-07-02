#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while ( scanf("%d", &n) && n != 0 ) {
        priority_queue<int, vector<int>, greater<int> >pq;
        for (int i = 1; i <= n; ++i) {
            int num;
            scanf("%d", &num);
            pq.push(num);
        }
        int total = 0;
        while (pq.size() != 1) {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            int sum = x + y;
            pq.push(sum);
            total += sum;
        }
        pq.pop();
        cout << total << endl;
    }
}
