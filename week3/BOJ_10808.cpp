#include <bits/stdc++.h>
using namespace std;

int freq[26]; // 초기값은 0이어야 할텐데 전역에 선언하면 알아서 0으로 채워짐 → 따로 초기화 필요 x
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	for(auto c : s) //그릇에 1 더해줌
		freq[c-'a']++; // a=0, b=1 ... z=25
	for(int i = 0; i < 26; i++)
		cout << freq[i] << ' ';
    return 0;
}