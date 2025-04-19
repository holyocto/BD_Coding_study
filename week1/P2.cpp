#include <bits/stdc++.h>
using namespace std;

int func2(int arr[], int N){
	for(int i=0; i<N; i++)
		for(int j = i+1; j<N; j++)
			if(arr[i]+arr[j]==100) return 1;
	return 0;
}

int main() {
    int N;
    cout << "배열의 크기를 입력하세요: ";
    cin >> N;

    int* arr = new int[N];
    cout << N << "개의 정수를 입력하세요:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int result = func2(arr, N);
    cout << "결과: " << result << endl;

    // 메모리 해제
    delete[] arr;
    
    cout << "\n엔터를 누르면 종료...";
    cin.ignore(); 
    cin.get(); 
    return 0;
}