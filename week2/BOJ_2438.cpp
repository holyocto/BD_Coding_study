#include <bits/stdc++.h>
using namespace std;

//세상에서 별찍기가 제일 싫어
int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) 
            cout << '*';
        cout << '\n';
    }
    return 0;
}