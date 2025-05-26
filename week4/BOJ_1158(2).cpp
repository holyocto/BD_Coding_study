#include <bits/stdc++.h>
using namespace std;

const int MAX = 5001;
int nxt[MAX];

int main() {
    int N, K;
    cin >> N >> K;

    for (int i = 1; i <= N; ++i) {
        nxt[i] = (i == N) ? 1 : i + 1;
    }
    int cur = 1;    
    int prev = N;   
    cout << "<";

    for (int i = 0; i < N; ++i) {
        for (int j = 1; j < K; ++j) {
            prev = cur;
            cur = nxt[cur];
        }
        cout << cur;
        if (i != N - 1) cout << ", ";
        nxt[prev] = nxt[cur]; 
        cur = nxt[cur];       
    }

    cout << ">\n";
    return 0;
}
