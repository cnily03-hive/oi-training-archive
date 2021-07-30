#include <iostream>
using namespace std;
int nature(int n) {
	int count=0;
	if(n==1)
		return 1;
	else {
		for(int i=1;i<=n/2;i++)
			count+=nature(i);
		count++;
		return count;
	}
}
int main() {
	int n;
	cin>>n;
	cout<<nature(n);
	return 0;
}
