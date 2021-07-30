#include <iostream>
using namespace std;
int main() {
	int h[10+5],max,count=0;
	for(int i=0;i<10;i++)
		cin>>h[i];
	cin>>max;
	for(int i=0;i<10;i++)
		if(max+30>=h[i])
			count++;
	cout<<count;
	return 0;
}
