#include<bits/stdc++.h>
using namespace std;
int main() {
    int pages;
    scanf("%d", &pages);
    int a[7] = {0};
    for (int i = 0; i < 7; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 7; ++i) {
        if (pages > 0) {
            pages -= a[i];
        }
        if (pages <= 0) {
            printf("%d\n", i+1);
            break;
        }
        if(i == 6) {
            i = -1;
        }
    }
}
