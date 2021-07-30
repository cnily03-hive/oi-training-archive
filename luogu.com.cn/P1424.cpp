#include <iostream>
using namespace std;
int main() {
	int v=150+100,sum=0,x,n;
	cin>>x>>n;
	for(int i=x;i<=x+n-1;i++)
		if(i%7!=0 && i%7!=6) //排除双休日
			sum+=v;
	cout<<sum;
	return 0;
}
