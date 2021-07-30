#include <iostream>
using namespace std;
int main() {
	int n,a[10000],b[10000],g[10000],k[10000],tx,ty;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	cin>>tx>>ty;
	for(int i=n-1;i>=0;i--) {
		if(a[i]<=tx && a[i]+g[i]>=tx && b[i]<=ty && b[i]+k[i]>=ty) {
			cout<<i+1;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}
