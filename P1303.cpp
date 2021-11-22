#include <cstring>
#include <iostream>
#define MAX_LEN 4002
using namespace std;
int parseInt(char c) {
    return c - '0';
}
void high(char u[], char v[]) {
    int rs[2][MAX_LEN], lenU = strlen(u), lenV = strlen(v);
    for (register int i = 0; i < MAX_LEN; i++)
        rs[0][i] = rs[1][i] = 0;
    for (register int i = lenU - 1; i >= 0; i--) {
        int numU = parseInt(u[i]), fwG = 0, fwS = 0, indexR = lenU - i - 1,
            store = i % 2;
        // clear the store to be used at present
        for (register int i = 0; i < MAX_LEN; i++)
            rs[store][i] = 0;
        // multipy single with giant
        for (register int j = lenV - 1; j >= -1; j--) {
            int temp = j < 0 ? fwS : (parseInt(v[j]) * numU + fwS);
            rs[store][lenV - j - 1 + indexR] = temp % 10, fwS = temp / 10;
        }
        // plus result
        for (register int k = 0; k < MAX_LEN; k++) {
            int temp = rs[store][k] + rs[!store][k] + fwG;
            rs[store][k] = temp % 10, fwG = temp / 10;
        }
    }
    // output
    bool loop = 0;
    for (register int i = MAX_LEN - 1; i >= 0; i--) {
        if (!i || rs[0][i])
            loop = 1;
        if (loop)
            cout << rs[0][i];
    }
}
char ai[2001], bi[2001];
int main() {
    cin >> ai >> bi;
    high(ai, bi);
    return 0;
}