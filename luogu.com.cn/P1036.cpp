#include <iostream>
#include <cmath>
using namespace std;
int count=0;
bool isprime(int n) {
	int flag=1;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) {
			flag=0;
			break;
		}
	if(flag==0) return false;
	else return true;
}
void change(int a[], int cb[], int bit, int index, int &k, int &n) {
	int sum;
	for(int i=index;i<n;i++) {
		cb[bit]=a[i];
		if(bit<k-1)
			change(a,cb,bit+1,i+1,k,n);
		if(bit==k-1) {
			sum=0;
			for(int j=0;j<k;j++)
				sum+=cb[j];
			if(isprime(sum))
				count++;
		}
	}

}
int main() {
	int n,k,a[20+5],cb[20+5]={0}; //cb[]: combination[]
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];

	change(a,cb,0,0,k,n);
	cout<<count;
	return 0;
}
