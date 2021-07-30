#include <iostream>
using namespace std;
int main() {
	int a,b,week=0,sum=0;
	for(int i=1;i<=7;i++) {
		cin>>a>>b;
		if(a+b>8) {
			week = a+b>sum?i:week;
			sum = a+b>sum?a+b:sum;
		}
	}
	cout<<week;
	return 0;
}
