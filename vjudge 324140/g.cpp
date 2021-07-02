#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while ( scanf("%d", &n) == 1 )  {
        stack<int>s;
        queue<int>q;
        priority_queue<int>pq;
        bool sflag = true;
        bool qflag = true;
        bool pqflag = true;

        while (n--) {
            int command, x;
            scanf("%d %d", &command, &x);
            if (command == 1) {
                s.push(x);
                q.push(x);
                pq.push(x);
            } else {
                if (sflag) {
                    if (s.empty() || s.top() != x) {
                        sflag = false;
                    } else {
                        s.pop();
                    }
                }
                if (qflag) {
                    if (q.empty() || q.front() != x) {
                        qflag = false;
                    } else {
                        q.pop();
                    }
                }
                if (pqflag) {
                    if (pq.empty() || pq.top() != x) {
                        pqflag = false;
                    } else {
                        pq.pop();
                    }
                }
            }
        }

        if (!sflag && !qflag && !pqflag)
            cout << "impossible\n";
        else if ((sflag && qflag) ||
                (sflag && pqflag) ||
                (qflag && pqflag))
            cout << "not sure\n";
        else if (sflag)
            cout << "stack\n";
        else if (qflag)
            cout << "queue\n";
        else
            cout << "priority queue\n";
    }
}
