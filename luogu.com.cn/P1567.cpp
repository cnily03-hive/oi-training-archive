#include <iostream>
using namespace std;
long long a[10000000+5];
int main() {
	long long n,max=1,day=1;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		if(i>=1 && a[i-1]<=a[i])
			day++;
		else if(i>=1 && a[i-1]>a[i]) {
			max = max>day?max:day;
			day=1;
		}
	}
	cout<<max;
	return 0;
}
