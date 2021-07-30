#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double s,x,go=0,v=7,t=1,t1,t2;
	cin>>s>>x;
	while(s-x>go) {
		go+=v;
		v*=0.98;
		t++;
	}
	t1=t;
	while(s+x>=go) {
		go+=v;
		v*=0.98;
		t++;
	}
	t2=t;
	if(t2-t1<=1) cout<<"n";
	else cout<<"y";
	return 0;
}
