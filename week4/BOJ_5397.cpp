#include <bits/stdc++.h>
using namespace std;

int N;
string K;

int pre[5001];
int nxt[5001];
vector<int> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    
    for (int i = 0; i<N; i++){
        list<char> L = {};
        auto p = L.begin();

        cin >> K;
        for (auto c : K){
            if(c=='<'){
                if (p!=L.begin()) p--;
            }
            else if (c=='>'){
                if (p!=L.end())p++;
            }
            else if (c=='-'){
                if (p!=L.begin()){
                    p--;
                    p=L.erase(p);
                }
            }
            else L.insert(p,c);
        }
        for (auto c : L) cout << c;
        cout << '\n';
    }
}