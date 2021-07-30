#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int n) {
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return true;
}
int main() {
	int n;
	bool found=false;
	cin>>n;
	for(int i=2;i<=n;i++)
		if(isprime(i)) for(int j=i;j<=n-i-j;j++)
			if(isprime(j)&&isprime(n-i-j)) {
				cout<<i<<" "<<j<<" "<<n-i-j;
				return 0;
			}
	return 0;
}

