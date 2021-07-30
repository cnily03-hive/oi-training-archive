#include <iostream>
using namespace std;
int main() {
	int n,s,a,b,xi[5000+5],yi[5000+5],cans[5000+5],j=0,count=0;
	cin>>n>>s>>a>>b;
	for(int i=0;i<n;i++) {
		cin>>xi[i]>>yi[i];
		if(a+b>=xi[i]) {
			cans[j]=yi[i];
			j++;
		}
	}
	int min,minj;
	while(s>=0) {
		min=101;
		for(int i=0;i<j;i++) {
			minj=cans[i]<min?i:minj;
			min=cans[i]<min?cans[i]:min;
		}
		s-=min;
		cans[minj]=102;
		if(s>=0)
			count++;
		
	}
	cout<<count;
	return 0;
}
