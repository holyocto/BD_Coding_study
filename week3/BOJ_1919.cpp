#include <bits/stdc++.h>
using namespace std;

// 이 문제는 애너그램 판별 문제가 아니므로 sort 필요 없음
// 각 알파벳은 고정된 인덱스로 저장되므로 단순 빼기를 해도 다른 문자로 착오 생기지 않음.
int main() {
    string a, b;
    cin >> a >> b;
    int A[26] = {0};
    int B[26] = {0};

    // 첫번째 입력값의 알파벳 개수 세기
    for (char ch : a) {
        A[ch - 'a']++;
    }
    // 두번째 입력값의 알파벳 개수 세기
    for (char ch : b) {
        B[ch - 'a']++;
    }

    int rm = 0;
    for (int i = 0; i < 26; i++) {
        rm += abs(A[i] - B[i]);
    }
    cout << rm;
    return 0;
}