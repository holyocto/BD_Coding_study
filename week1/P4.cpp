#include <bits/stdc++.h>
using namespace std;

int func4(int N) {
    int i = 1;
    while (2 * i <= N) i *= 2;
    return i;
}

int main() {
    int input;
    cout << "정수를 입력하시오: ";
    cin >> input;

    int result = func4(input);
    cout << "func4(" << input << ") = " << result << endl;

    cout << "\n엔터를 누르면 종료...";
    cin.ignore(); 
    cin.get();  
    return 0;
}