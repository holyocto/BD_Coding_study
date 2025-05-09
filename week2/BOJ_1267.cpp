#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, t, y = 0, m = 0;
    cin >> N;
    while (N--) {
        cin >> t;
        y += (t / 30 + 1) * 10;
        m += (t / 60 + 1) * 15;
    }
    if (y < m) cout << "Y " << y;
    else if (y > m) cout << "M " << m;
    else cout << "Y M " << y;
    return 0;
}