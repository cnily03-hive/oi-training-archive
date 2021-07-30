#include <iostream>
#include <cstdio>
using namespace std;
int a[1000+3][1000+3];
int main() {
    int m,n,K,L,x1,y1,x2,y2,min,Kin=0,Lin=0,max,maxj;
    cin>>m>>n>>K>>L>>n;
    
    for(int i=1;i<=n;i++) {
        cin>>x1>>y1>>x2>>y2;
        if(y1==y2) {
            min=x1<x2?x1:x2;
            a[min][0]++;
            Kin=Kin>min?Kin:min;
        }
        else if(x1==x2) {
            min=y1<y2?y1:y2;
            a[0][min]++;
            Lin=Lin>min?Lin:min;
        }
    }
    
    
    for(int i=0;i<K;i++) {
    	max=0; maxj=0;
    	for(int j=1;j<=Kin;j++) {
    		maxj=max>a[j][0]?maxj:j;
    		max=max>a[j][0]?max:a[j][0];
        }
        a[maxj][0]=-1;
    }
    for(int i=0;i<L;i++) {
    	max=0; maxj=0;
    	for(int j=1;j<=Lin;j++) {
    		maxj=max>a[0][j]?maxj:j;
    		max=max>a[0][j]?max:a[0][j];
        }
        a[0][maxj]=-1;
    }
    
   	for(int i=1;K>0;i++)
    	if(a[i][0]==-1) {
            if(K==1) cout<<i;
            else cout<<i<<" ";
            K--;
        }
    cout<<endl;
    for(int i=1;L>0;i++)
    	if(a[0][i]==-1) {
            if(L==1) cout<<i;
            else cout<<i<<" ";
            L--;
        }
    return 0;
}
