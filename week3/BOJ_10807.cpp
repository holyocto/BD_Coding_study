#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, X;
    cin >> n;
    set<int> seq; //중복을 자동으로 제거하면서 정렬된 상태로 값을 저장하는 컨테이너...라고 함
                  //심지어 자동 sort 시켜서 저장함 ㄷㄷㄷ
    int num;

    while (seq.size() < n) {
        cin >> num;
        seq.insert(num); // 중복이면 자동으로 무시됨
    }
    vector<int> arr(seq.begin(), seq.end());
    for(int i = 0; i<n; i++)
        cout << arr[i] << ' ';
    cin >> X;
}