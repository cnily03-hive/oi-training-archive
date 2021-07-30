#include <iostream>
using namespace std;
int main() {
	int jing=0,putaway,mum=0,flag=0;
	for(int i=1;i<=12;i++) {
		cin>>putaway;
		jing+=300;
		jing-=putaway;
		if(jing<0) {
			cout<<"-"<<i;
			break;
		} else {
			mum+=jing/100*100;
			jing%=100;
			flag++;
		}
	}
	if(flag==12)
		cout<<jing+mum*1.2;
	return 0;
}
