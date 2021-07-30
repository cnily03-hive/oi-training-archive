#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	char c[40+5],i=0;
	bool zero_end;
	while((c[i++]=getchar())!='\n'); //文件输入或LUOGU平台将\n改为EOF 
	
	for(int j=0;j<i-1;j++) {
		if(c[j]=='.' || c[j]=='/' || c[j]=='%') {
			zero_end=false;
			for(int k=j-1;k>=0;k--) {
				if(c[k]!='0') zero_end=true;
				if(zero_end) cout<<c[k];
			} if(zero_end==false) cout<<'0';
			cout<<c[j];
			//以上为./%通用操作 
			if(c[j]=='.') {
				zero_end=false;
				for(int k=j+1;k<i-1-1;k++) {
					if(c[k]!='0') zero_end=true;
					if(zero_end==false) c[k]=0;
				}
				for(int k=i-2;k>=j+1;k--)
					if(c[k]!=0) cout<<c[k];
			}
			if(c[j]=='/') {
				zero_end=false;
				for(int k=i-2;k>=j+1;k--) {
					if(c[k]!='0') zero_end=true;
					if(zero_end) cout<<c[k];
				}
			}
			return 0;
		}
	}
	zero_end=false;
	for(int j=i-2;j>=0;j--) {
		if(c[j]!='0') zero_end=true;
		if(zero_end) cout<<c[j];
	} if(zero_end==false) cout<<'0';
	return 0;
}
