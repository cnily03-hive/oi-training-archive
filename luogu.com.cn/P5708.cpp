#include <cmath>
#include <cstdio>
using namespace std;
int main() {
    double a, b, c, p, r;
    scanf("%lf %lf %lf", &a, &b, &c);
    p = 0.5 * (a + b + c);
    r = sqrt(p) * sqrt(p - a) * sqrt(p - b) * sqrt(p - c);
    printf("%.1lf", r);
    return 0;
}