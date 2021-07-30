#include <iostream>
using namespace std;
int main() {
	int a[100000]={0},L,n,x,y,count=0;
	cin>>L>>n;
	for(int i=1;i<=n;i++) {
		cin>>x>>y;
		for(int j=x;j<=y;j++)
			a[j]=1;
	}
	for(int i=0;i<=L;i++)
		if(a[i]==0)
			count++;
	cout<<count;
	return 0;
}
