#include <bits/stdc++.h>
using namespace std;

//공백은 n 따라가고 별은 2n-1 따라간다는 거지?
int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < N - i; j++) 
            cout << ' ';
        for (int j = 0; j < 2 * i - 1; j++) 
            cout << '*';
        cout << '\n';
    }
    return 0;
}