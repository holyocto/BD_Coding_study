#include <bits/stdc++.h>
using namespace std;

int func3(int N){
	for (int i=1; i*1 <= N; i++){
		if(i*i == N) return 1;
	}
	return 0;
}

int main() {
    int input;
    cout << "정수를 입력하시오: ";
    cin >> input;

    int result = func3(input);
    cout << "func3(" << input << ") = " << result << endl;

    cout << "\n엔터를 누르면 종료...";
    cin.ignore(); 
    cin.get();   
    return 0;
}