#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, X;
    int a;
    cin >> N >> X;

    for (int i = 0; i < N; i++) {
        cin >> a;
        if (a < X)
            cout << a << " ";
    }

    return 0;
}

//사실 문제 이해 안됨...a가 뭔데?
//    for (int i = 0; i < X-N-1; i++) {
//       if (N < X)
//            cout << N+1+i << " ";
//        else cout << ' ';
//    }
//이렇게 해도 결과값은 나오는데....