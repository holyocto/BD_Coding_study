#include <bits/stdc++.h>
using namespace std;

//뭐임티비...? 모르겠음....
//배열에서 안 겹치는 두 개씩 빼가면서 나머지의 합이 100인지 비교?
//찾을 수 없는 일은 없다는 건 입력값이 100을 넘어야 하는데 동시에 합해서 100이 되는 일곱개의 수가 있어야 한다는 거잖아...
int main() {
    int arr[9];
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    bool a = false;
    for (int i = 0; i < 8 && !a; i++) {
        for (int j = i + 1; j < 9 && !a; j++) {
            if (sum - arr[i] - arr[j] == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        cout << arr[k] << '\n';
                    }
                }
                a = true;
            }
        }
    }

    return 0;
}