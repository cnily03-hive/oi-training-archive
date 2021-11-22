#include <iostream>
#include <cstdio>
using namespace std;
int max(int a, int b) {
    return a > b ? a : b;
}
int n, a[2][1002], mn; // a[]=line_max[], when at the line,the maxinum of each point
int main() {
    cin >> n;
    int down = 0;
    for (register int i = 0; i < n; i++) {
        for (register int j = 1; j <= i + 1; j++) {
            cin >> a[down][j];
            if (!i) break;
            a[down][j] = max(a[!down][j - 1], a[!down][j]) + a[down][j];
        }
        down = !down;
    }
    down = !down;
    for (register int j = 1; j <= n; j++)
        mn = max(mn, a[down][j]);
    cout << mn;
    return 0;
}