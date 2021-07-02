#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    while ( scanf("%d", &num) && num != 0 ) {
        deque<int>dq;
        for (int i = 1; i <= num; ++i) {
            dq.push_back(i);
        }
        printf("Discarded cards:");
        int rem;
        while (dq.size() > 1) {
            printf(" %d", dq.front());
            dq.pop_front();
            rem = dq.front();
            dq.pop_front();
            if (!dq.empty())
            printf(",");
			dq.push_back(rem);
        }

        printf("\nRemaining card: %d\n", dq.front());
		dq.pop_front();
    }
}
