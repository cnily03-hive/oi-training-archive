#include <iostream>
using namespace std;
int main() {
	int step;
	double v=2,length;
	cin>>length;
	//use for(1)
	for(step=1;;step++) {
		length-=v;
		v*=0.98;
		if(length<=0) {
			cout<<step;
			break;
		}
	}
	/*

	//use for(2)
	for(step=0;length>0;step++,length-=v,v*0.98)
	;
	cout<<step;

	*/
	return 0;
}
