#include <bits/stdc++.h>
using namespace std;

//6,9 따로, 나머지 숫자 따로
int main() {
    string num;
    cin >> num;
    int arr[10] = {0};
    for (char ch : num) {
        int N = ch - '0';
        arr[N]++;
    }
    int SN = arr[6] + arr[9];
    arr[6] = (SN + 1) / 2; //올림처리 해줘야 손실 안 일어난다.
    arr[9] = 0; 
    int res = *max_element(arr, arr + 9); 
    cout << res << '\n';
    return 0;
}