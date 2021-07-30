#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	double x,y,z;
	cin>>x>>y>>z;
	bool unfound=true;
	for(a=100;a<=333;a++) {
		b=y/x*a;
		c=z/x*a;
		if(
			(a%10)*(b%10)*(c%10)*(a%100/10)*(b%100/10)*(c%100/10)*(a/100)*(b/100)*(c/100)==362880 &&
			(a%10)+(b%10)+(c%10)+(a%100/10)+(b%100/10)+(c%100/10)+(a/100)+(b/100)+(c/100)==45
		) {
			cout<<a<<" "<<b<<" "<<c<<endl;
			unfound=false;
		}
	}
	if(unfound) cout<<"No!!!";
	return 0;
}
