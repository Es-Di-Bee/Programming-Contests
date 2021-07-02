#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        float a[n] = {0};
        float b[n] = {0};
        for (int i = 0; i < n; ++i) {
            scanf("%f %f", &a[i], &b[i]);
        }
        int infC = 0;

        vector<float>v;
        for (int i = 0; i < n-1; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (a[j] - a[i] == 0) {
                        if (infC == 0) {
                                ++infC;
                                continue;
                        } else {
                                continue;
                        }
                }
                float slope = (b[j] - b[i]) / (a[j] - a[i]);
                bool flag = true;
                if (i == 0 && j == 1) {
                    v.push_back(slope);
                    continue;
                }
                for (int k = 0; k < v.size(); ++k) {
                    if (v[k] == slope) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                        v.push_back(slope);
                }
            }
        }
        int sz = v.size() + infC;
        printf("%d\n", sz);
    }
}
