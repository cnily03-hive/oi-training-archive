#include <iostream>

using namespace std;

int n, a[100+5], count,
	sum, t, add;

int main() {
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		sum+=a[i];
	}
	t=sum/n;

	for(int i=0; i<n; i++) {
		add=t-a[i];
		a[i+1]-=add;
		a[i]=t;
		if(add!=0) count++;
		//the way of using "add" has already included the vaule a[i] biger or smaller than the vaule t
	}

	cout<<count;
	return 0;
}
