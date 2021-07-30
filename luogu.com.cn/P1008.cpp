#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	for(a=100;a<=333;a++) {
		b=2*a;
		c=3*a;
		if(
			(a%10)*(b%10)*(c%10)*(a%100/10)*(b%100/10)*(c%100/10)*(a/100)*(b/100)*(c/100)==362880 &&
			(a%10)+(b%10)+(c%10)+(a%100/10)+(b%100/10)+(c%100/10)+(a/100)+(b/100)+(c/100)==45
		)
			cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}
