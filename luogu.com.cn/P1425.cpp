#include <cstdio>
using namespace std;
int main() {
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int out = 60*(c-a-1)+(60-b)+d;
	printf("%d %d",out/60,out%60);
}
