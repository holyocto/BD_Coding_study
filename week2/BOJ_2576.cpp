#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int arr[7];       
    int odd[7];       
    int cnt = 0;     
    int sum = 0;

    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
        if (arr[i] % 2 != 0) {
            odd[cnt++] = arr[i];
            sum += arr[i];
        }
    }

    if (cnt == 0) 
        cout << "-1\n";
    else {
        sort(odd, odd + cnt);
        cout << sum << '\n';
        cout << odd[0];
    }

    return 0;
}
