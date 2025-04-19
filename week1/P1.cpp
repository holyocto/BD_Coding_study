#include <bits/stdc++.h>
using namespace std;

int func1(int N){
	int ret =0;
	for(int i=1; i<=N; i++){
		if(i%3 == 0 || i%5 == 0) ret +=i;
	}
	return ret;
}

int main() {
    int input;
    cout << "정수를 입력하시오: ";
    cin >> input;

    int result = func1(input);
    cout << "func1(" << input << ") = " << result << endl;

    // 터미널이 바로 닫히지 않도록 대기
    cout << "\n엔터를 누르면 종료...";
    cin.ignore(); // 버퍼에 남아있는 개행 문자 제거
    cin.get();    // 엔터 입력 대기
    return 0;
}