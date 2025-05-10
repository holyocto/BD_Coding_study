#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;
    while(N--){
        string s, t;
        cin >> s >> t;
        if (s.length() != t.length()){
            cout << "Impossible\n";
            continue;
        }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s==t)
        cout << "Possible\n";
    else cout << "Impossible\n";
    }
    return 0;
}