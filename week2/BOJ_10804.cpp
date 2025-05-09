#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[20];
    for (int i = 0; i < 20; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 10; i++) {
        int a, b;
        cin >> a >> b;
        reverse(arr + (a - 1), arr + b); // reverse는 0-based 인덱스를 사용하므로 -1 보정 필요!
    }
    for (int i = 0; i < 20; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}