#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int r, c, map[102][102], record[102][102], mn = 0;
struct mapline {
    int r, c, value;
} a[102 * 102];

bool cmp(mapline a, mapline b) {
    return a.value > b.value;
}

int max(int a, int b) { return a > b ? a : b; }
bool check(int k, int dr, int dc) {
    return map[a[k].r][a[k].c] > map[a[k].r + dr][a[k].c + dc];
}
void operate(int k, int dr, int dc) {
    if (check(k, dr, dc)) {
        record[a[k].r + dr][a[k].c + dc] = max(record[a[k].r][a[k].c] + 1, record[a[k].r + dr][a[k].c + dc]);
    }
}
int main() {
    cin >> r >> c;
    int i = 0;
    for (register int ri = 1; ri <= r; ri++)
        for (register int ci = 1; ci <= c; ci++) {
            cin >> a[i].value;
            map[ri][ci] = a[i].value;
            a[i].r = ri;
            a[i].c = ci;
            i++;
        }
    sort(a, a + r * c, cmp);
    for (register int k = 0; k < r * c; k++) {
        operate(k, 0, 1);
        operate(k, 0, -1);
        operate(k, 1, 0);
        operate(k, -1, 0);
    }

    for (register int ri = 1; ri <= r; ri++)
        for (register int ci = 1; ci <= c; ci++) {
            mn = max(mn, record[ri][ci]);
        }
    cout << mn + 1;
    return 0;
}