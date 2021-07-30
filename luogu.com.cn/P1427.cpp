#include <iostream>
using namespace std;
int main() {
	int a[100+5],max;
	for(int i=0;;i++) {
		cin>>a[i];
		if(a[i]==0) {
			max=i;
			break;
		}
	}
	for(int i=max-1;i>=0;i--)
		cout<<a[i]<<" ";
	return 0;
}
