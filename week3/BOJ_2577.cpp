#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int res = A * B * C;
    int arr[10] = {0};
    string str = to_string(res); //문자열로 변환하기(숫자 하나씩 떼서 보는 느낌이라서서)
    for (char ch : str) { //문자열의 각 문자를 ch라는 변수로 반복
        arr[ch - '0']++; // str '0'의 아스키값 만큼을 뺴줘야 실제 숫자값이 되므로 ch-'0'
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << '\n';
    }
    return 0;
}