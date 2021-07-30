#include <iostream>
using namespace std;
int main() {
	int n,x,count=0,copy;
	cin>>n>>x;
	for(int i=1;i<=n;i++) {
		copy=i;
		while(copy>0) {
			if(copy%10==x)
				count++;
			copy/=10;
		}
	}
	cout<<count;
	return 0;
}
