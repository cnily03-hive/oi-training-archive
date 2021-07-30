#include <iostream>
using namespace std;
int main() {
	int k,n;
	double sum=0;
	cin>>k;
	for(n=1;;n++) {
		sum+=1.0/n;
		if(sum>k) {
			cout<<n;
			break;
		}
	}
	return 0;
}
/*
 *欧拉常数
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n;
    cin>>k;
    n=exp(k-0.57721566490153286060651209)+0.5;
    cout<<n;
    return 0;
}
*/
