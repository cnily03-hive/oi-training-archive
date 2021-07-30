#include <iostream>
#include <cstdio>
using namespace std;
int a[1000+5];
int main() {
	for(int i=0;i<1000;i++)
	   a[i]=-1;
	int m,n,cur=0,count=0,in;
	cin>>m>>n;
	for(int i=0;i<n;i++) {
		cin>>in;
		for(int j=cur;j<=m;j++)
			if(a[j]==in) break;
			else if(j==m) {
				cur++; m++;
				a[j]=in;
				count++;
				break;
			}
			else if(a[j]==-1) {
				a[j]=in;
				count++;
				break;
			}
	}
	cout<<count;
	return 0;
}
