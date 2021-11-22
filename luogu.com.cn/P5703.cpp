#include <iostream>
#define MAX_LEN 20

using namespace std;
void read(int a[], int b[]) {
    int ai[MAX_LEN], bi[MAX_LEN], ch, index = 0;
    bool loop = true, readAi = true;
    while (loop) {
        ch = cin.get();
        if (ch >= '0' && ch <= '9') {
            ch = ch - '0';
            readAi ? ai[index] = ch : bi[index] = ch;
            index++;
        } else {
            if (readAi)
                for (register int i = 0; i < index; i++)
                    a[i] = ai[index - i - 1];
            else
                for (register int i = 0; i < index; i++)
                    b[i] = bi[index - i - 1];
            loop = readAi;
            readAi = false, index = 0;
        }
    }
}
void plus_gg(int u[], int v[], int result[]) {
    int fw = 0;
    for (register int i = 0; i < MAX_LEN; i++) {
        int p = u[i] + v[i] + fw;
        result[i] = p % 10;
        fw = p / 10;
    }
}
// g: giant, s: single
void multipy_gs(int u[], int v, int result[]) {
    int fw = 0;
    for (register int i = 0; i < MAX_LEN; i++) {
        int m = u[i] * v + fw;
        result[i] = m % 10;
        fw = m / 10;
    }
}
void tenfy(int o[], int howmany = 1) {
    for (register int i = MAX_LEN - 1; i >= 0; i--) {
        o[i] = (i > howmany - 1 ? o[i - howmany] : 0);
    }
}
void multipy_gg(int u[], int v[], int result[]) {
    int rs[2][MAX_LEN];
    for (register int i = 0; i < MAX_LEN; i++) {
        rs[0][i] = 0;
    }
    int index = 1;
    for (register int i = 0; i < MAX_LEN; i++) {
        multipy_gs(u, v[i], rs[index]);
        if (i > 0)
            tenfy(rs[index], i);
        int trs[MAX_LEN];
        plus_gg(rs[index], rs[!index], trs);
        for (register int i = 0; i < MAX_LEN; i++) {
            rs[index][i] = trs[i];
        }
        index = !index;
    }
    for (register int i = 0; i < MAX_LEN; i++) {
        result[i] = rs[!index][i];
    }
}
int a[MAX_LEN], b[MAX_LEN], r[MAX_LEN];
int main() {
    read(a, b);
    multipy_gg(a, b, r);
    bool output = false;
    for (register int i = MAX_LEN - 1; i >= 0; i--) {
        if ((!output && r[i] != 0) || !i)
            output = true;
        if (output)
            cout << r[i];
    }
    return 0;
}