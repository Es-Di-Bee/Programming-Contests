#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        int time = 0;
        int jobs, position;
        cin >> jobs >> position;
        vector<int>v;
        priority_queue<int>pq;
        for (int i = 0; i < jobs; ++i) {
            int x;
            cin >> x;
            v.push_back(x);
            pq.push(x);
        }
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] != pq.top()) {
                if (i == position) {
                    position = v.size();
                }
                v.push_back(v[i]);
            } else {
                if (i == position) {
                    ++time;
                    break;
                }
                pq.pop();
                ++time;
            }
        }
        cout << time << endl;
    }
}
