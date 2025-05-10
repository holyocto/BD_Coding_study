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
    vector<int> arr(seq.begin(), seq.end());//set은 인덱스로 접근하지 못해서 벡터화 함
//    for(int i = 0; i<n; i++)
//        cout << arr[i] << ' '; 잘 들어갔나 확인하는 코드
    cin >> X;
    //two-pointer 알고리즘? 모름...다시 공부해야 할 듯
    int left = 0, right = arr.size() - 1, cnt = 0;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == X) {
            cnt++;
            left++;
            right--;
        } 
        else if (sum < X) left++;
        else right--;
    }
    cout << cnt;
    return 0;
}