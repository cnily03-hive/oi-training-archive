#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int p1, p2, p3;
char c[105];

/*void ToLower(char &c) {
	if(c>='A' && c<='Z')
		c = c+('a'-'A');
}*/
void ToUpper(char &c) {
	if(c>='a' && c<='z')
		c = c-('a'-'A');
}


int main() {
	cin>>p1>>p2>>p3;
	cin>>c;
	
	int len=strlen(c);
	for(int i=0; i<len; i++) {
		if(c[i]!='-')
			cout<<c[i];
		
		if(c[i]=='-')
			if(c[i+1]<=c[i-1])
				cout<<c[i];
			else if(
				i!=0 &&
				((c[i-1]>='a' && c[i-1]<='z' && c[i+1]>='a' && c[i+1]<='z') || (c[i-1]>='0' && c[i-1]<='9' && c[i+1]>='0' && c[i+1]<='9'))
			){
				char p,q;
				p=c[i-1]; q=c[i+1];
				
				/*if(p1==1) {
					ToLower(p); ToLower(q);
				} else */if(p1==2) {
					ToUpper(p); ToUpper(q);
				}
				if(p3==1)
					for(int j=p+1; j<=q-1; j++)
						for(int k=0; k<p2; k++)
							if(p1==3) cout<<'*';
							else cout<<(char)j;
				else if(p3==2)
					for(int j=q-1; j>=p+1; j--)
						for(int k=0; k<p2; k++)
							if(p1==3) cout<<'*';
							else cout<<(char)j;
			} else cout<<c[i];
	}
	
	return 0;
}
