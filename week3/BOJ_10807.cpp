#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, v;
    cin >> N;
    
    vector<int> arr(N);
    for(int i = 0; i<N; i++)
        cin >> arr[i];
    cin >> v;

    int cnt = 0;
    for (auto c : arr) //이거 쓰는 법 아직 헷갈린다...
        if (c==v) cnt++;
    
    cout << cnt;
    return 0;
}