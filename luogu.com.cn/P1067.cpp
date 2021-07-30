#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int up,curup,k[100+5],cs;
    cin>>up;
    curup=up;
    while(up>0) {
        cin>>k[up];
        if(k[up]!=0) {
            if(up==curup) {
                if(k[up]==1)
                    cout<<'x';
                else if(k[up]==-1)
                    cout<<"-x";
                else
                    cout<<k[up]<<'x';
                if(up!=1) cout<<'^'<<up;
            }
            else {
                if(k[up]>0 && k[up]!=1) cout<<'+'<<k[up];
                if(k[up]<0 && k[up]!=-1) cout<<k[up];
                if(k[up]==1) cout<<'+';
                if(k[up]==-1) cout<<'-';
                cout<<'x';
                if(up!=1) cout<<'^'<<up;
            }
        }
        up--;
    }
    cin>>cs;
    if(cs>0) cout<<'+'<<cs;
    if(cs<0) cout<<cs;
    return 0;
}
