#include <iostream>
using namespace std;
int main() {
    char c[5];
    cin >> c;
    for (register int i = 4; i >= 0; i--) {
        cout << c[i];
    }
    return 0;
}