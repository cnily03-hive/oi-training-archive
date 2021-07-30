#include <iostream>
using namespace std;
int main() {
	int a[100+5],n,ugly;
	cin>>n;
	for(int i=0;i<n;i++) {
		ugly=0;
		cin>>a[i];
		for(int j=0;j<i;j++)
			if(a[j]<a[i])
				ugly++;
		cout<<ugly<<" ";
	}
	return 0;
}
