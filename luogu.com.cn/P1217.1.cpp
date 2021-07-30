//LUOGU会超时
#include <iostream>
#include <cmath>
using namespace std;
bool isnop_prime(int n) { //nop(number of palindromes)
	int length=0,t=n;
	do {
		length++;
		t/=10;
	} while(t>0);
	bool flag=true;
	if(length%2 == 0 && n!=11)
		return false;  //is not prime
	//在回文数中，如果位数为偶数的话，那么这些回文数都可以被11整除，如1001、1221、345543都是11的倍数，只有11是质数
			if(n/(int)pow(10,i-1)%10 != n/(int)pow(10,j-1)%10)
				return false;
	return true;
}
bool isprime(int n) {
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) {
			return false;
		}
	return true;
}
int main() {
	int a,b;
	cin>>a>>b;
	for(int n=a;n<=b;n++)
		if(isnop_prime(n) && isprime(n))
			cout<<n<<endl;
	return 0;
}
