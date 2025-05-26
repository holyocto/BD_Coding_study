#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    list<int> L;
    for (int i = 1; i <= N; ++i)
        L.push_back(i);

    vector<int> result;
    auto it = L.begin();

    while (!L.empty()) {
        for (int i = 1; i < K; ++i) {
            ++it;
            if (it == L.end()) it = L.begin();
        }

        result.push_back(*it);        
        it = L.erase(it);               
        if (it == L.end()) it = L.begin(); 
    }

    cout << "<";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }
    cout << ">\n";

    return 0;
}
