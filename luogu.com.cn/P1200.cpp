#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	char c[6+5];
	int sa=1,sb=1,i=0;
	while((c[i]=getchar())!='\n') {
		sa*=c[i]-'A'+1;
		i++;
	}
	i=0;
	while((c[i]=getchar())!='\n') {
		sb*=c[i]-'A'+1;
		i++;
	}
	if(sa%47==sb%47) cout<<"GO";
	else cout<<"STAY";
	return 0;
}
