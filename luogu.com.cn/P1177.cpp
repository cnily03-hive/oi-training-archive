#include <iostream>
#include <cstdio>
using namespace std;
void swap(int &a, int &b) {
    int tmp=a;
    a=b;
    b=tmp;
}
void Qsort(int a[],int L,int R) {
    int key=a[(L+R)/2];
    int i=L;
    int j=R;
    while(i<=j) {
        while(a[j]>key)
            j--;
        while(a[i]<key)
            i++;
        if(i<=j) {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if(L<j)Qsort(a,L,j);
    if(R>i)Qsort(a,i,R);
}
int main() {
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,a[100000+5];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    
    Qsort(a,0,n-1);
    
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    //fclose(stdin);
    //fclose(stdout);
    return 0;
}
