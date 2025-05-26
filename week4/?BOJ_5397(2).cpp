#include <iostream>
using namespace std;

const int MAX = 1000005; 
int pre[MAX], nxt[MAX];
char dat[MAX];
int unused = 1;

void insert(int addr, char c) {
    dat[unused] = c;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void init() {
    for (int i = 0; i < unused; i++) {
        pre[i] = nxt[i] = -1;
        dat[i] = 0;
    }
    unused = 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    while (N--) {
        string K;
        cin >> K;

        init();
        int cursor = 0;

        for (char c : K) {
            if (c == '<') {
                if (pre[cursor] != -1) cursor = pre[cursor];
            } else if (c == '>') {
                if (nxt[cursor] != -1) cursor = nxt[cursor];
            } else if (c == '-') {
                if (pre[cursor] != -1) {
                    erase(pre[cursor]);
                }
            } else {
                insert(cursor, c);
                cursor = nxt[cursor];
            }
        }

        for (int i = nxt[0]; i != -1; i = nxt[i]) {
            cout << dat[i];
        }
        cout << '\n';
    }

    return 0;
}
