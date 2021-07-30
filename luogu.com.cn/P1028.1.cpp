#include <iostream>
using namespace std;
int count=1;
void nature(int n) {
	for(int i=1;i<=n/2;i++) {
			count++;
			nature(i);
	}
}
int main() {
	int n;
	cin>>n;
	nature(n);
	cout<<count;
	return 0;
}
