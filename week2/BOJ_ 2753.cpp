#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a;
    cin >> a;
    if(a>1 && a<4000)
        if (a%4==0 && a%100!=0 || a%400==0)
            cout << '1';
        else cout << '0';
    else cout << ' ';

    return 0;
}