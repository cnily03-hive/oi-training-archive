#include <iostream>
using namespace std;
int main() {
	int n,count=0,r=0,t,c[2223+5]={0},s[10]={6,2,5,5,4,5,6,3,7,6};
	cin>>n;
	while(r<=2222) {
		t=r;
		do {
			c[r]+=s[t%10];
			t/=10;
		} while(t>0);
		r++;
	}
	for(int i=0;i<=1111;i++)
		for(int j=0;j<=1111;j++)
			if(c[i]+c[j]+c[i+j]==n-4)
				count++;
	cout<<count;
	return 0;
}
/*
 0:6
 1:2
 2:5
 3:5
 4:4
 5:5
 6:6
 7:3
 8:7
 9:6
 +:2
 =:2
*/
