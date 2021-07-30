#include <iostream>
using namespace std;
int main() {
	int n;
	bool zero_end=false;
	cin>>n;
	if(n==0) cout<<0;
	else if(n<0) {
		cout<<'-';
		n*=-1;
	}
	while(n>0) {
		if(n%10!=0 && zero_end==false) //zero_end==false避免重复赋相同的值:true
			zero_end=true;
		if(zero_end)
			cout<<n%10;
		n/=10;
	}
	return 0;
}
