#include <iostream>
using namespace std;
/*
 Z字形排列结果
 1/1
 1/2  2/1
 3/1  2/2  1/3
 1/4  2/3  3/2  4/1
 5/1  4/2  3/3  2/4  1/5
 ……
*/
int main() {
	int line=0,n,copy,a,b; //有理数为a/b
	cin>>n;
	copy=n;
	while(copy>0) {
		line++;
		copy-=line;
	}
	copy+=line; //n位于第line行第copy个
	line;
	if(line%2!=0) {
		a=line; b=1;
		cout<<a+1-copy<<"/"<<b-1+copy;
	} else if(line%2==0) {
		a=1; b=line;
		cout<<a-1+copy<<"/"<<b+1-copy;
	}
	return 0;
}
