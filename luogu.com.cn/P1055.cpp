#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	char c[13+5];
	int i=0,p=1,sum=0;
	while((c[i]=getchar())!='\n') {
		if(c[i]<='9' && c[i]>='0' && i<12)
			sum+=(p++)*(c[i]-'0');
		i++;
	}
	sum%=11;
	if(sum==c[12]-'0' || (sum==10 && c[12]=='X'))
		cout<<"Right";
	else {
		for(int j=0;j<12;j++)
			cout<<c[j];
		if(sum==10) cout<<'X';
		else cout<<sum;
	}
	return 0;
}
