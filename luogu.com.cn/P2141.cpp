#include <iostream>
using namespace std;
int main() {
	int n,a[100+5],count=0,find;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++) {
		find=0;
		for(int j=0;j<n;j++) {
			if(a[j]<a[i]) {
				for(int k=0;k<n;k++)
					if(a[i]==a[j]+a[k] && j!=k) {
						count++;
						find=1;
						break;
					}
			}
			if(find==1)
				break;
		}
	}
	cout<<count;
	return 0;
}
