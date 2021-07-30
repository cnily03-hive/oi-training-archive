#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main() {
	int need,each,money,min=INT_MAX,pay;
	cin>>need;
	for(int i=1;i<=3;i++) {
		cin>>each>>money;
		pay=ceil((double)need/each)*money;
		min=pay<min?pay:min;
	}
	cout<<min;
	return 0;
}
