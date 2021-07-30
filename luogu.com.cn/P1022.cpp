#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char fx[100000],word;
int ans=0,k=0,b=0,zf=1,vle=1, //zf: 系数或常数项的正负; vle: 等式左右; use "kx+b=0"
	len,i=0;

int main() {
	cin>>fx;
	//6a-5+1=2-2a
	len=strlen(fx);
	while(i<len) {
		if(fx[i]=='=') vle=-1;
		
		if(fx[i]=='+' || fx[i]=='=') zf=1;
		else if(fx[i]=='-') zf=-1;
		//符号处理完毕
		
		if(fx[i]>='0' && fx[i]<='9') {//处理数字
			ans=ans*10+(fx[i]-'0');
			//开始存ans入常数项
			if(i==len-1 || fx[i+1]=='+' || fx[i+1]=='-' || fx[i+1]=='=') {
				b+=ans*zf*vle;
				ans=0;
				zf=1;
			}
		}
		
		if(fx[i]>='a' && fx[i]<='z') { //处理字母
			word=fx[i]; //发现未知数是何方字母
			if(i==0 || fx[i-1]=='+' || fx[i-1]=='-' || fx[i-1]=='=')
				ans=1;
			//开始存ans入系数
			k+=ans*zf*vle;
			//cout<<k<<" |k| ";
			ans=0;
			zf=1;
		}
		
		i++;
	}
	
	printf("%c=%0.3lf",word,-1.0*b/k);
	
	return 0;
}
