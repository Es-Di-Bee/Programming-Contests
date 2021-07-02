#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    int num1 = 0;
    int num2 = 0;
    if (str[0] == '-') {
        num1 = str[1] - 48;
        num2 = str[str.size()-1] - 48;
    }
    else {
        num1 = str[0] - 48;
        num2 = str[str.size()-1] - 48;
    }

    cout << num1+num2 << endl;
}
