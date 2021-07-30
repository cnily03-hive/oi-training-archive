#include <iostream>
using namespace std;
int main() {
	int step=0;
	double v=2,length;
	cin>>length;
	//use do-while
	do {
		step++;
		length-=v;
		v*=0.98;
	} while(length>0);
	cout<<step;
	return 0;
}
