#include <bits/stdc++.h>
using namespace std;

int main() {
    int max = 0;
    int idx = 0;
    for (int i = 0; i < 9; i++) {
        int num;
        cin >> num;
        if (num > max) {
            max = num;
            idx = i + 1;  
        }
    }
    cout << max << '\n';
    cout << idx << '\n';
    return 0;
}