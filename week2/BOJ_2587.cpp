#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + 5);

    cout << sum / 5 << '\n';     // 평균
    cout << arr[2] << '\n';      // 중앙값 (정렬 후 3번째 값)

    return 0;
}