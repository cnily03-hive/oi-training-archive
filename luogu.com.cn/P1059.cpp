/**
 * Qsort_LRgoes.cpp
 * Copyright George Vincent
*/
#include <iostream>
#include <cstdio>
using namespace std;
void swap(int &a, int &b) {
    int tmp=a;
    a=b;
    b=tmp;
}
void Qsort(int a[],int L,int R) {
    int key=a[(L+R)/2]; //特殊元素 
    int i=L; //前进指标 
    int j=R; //后退指标 
    while(i<=j) {
        while(a[j]>key) //寻找比右端key小的数 
            j--;
        while(a[i]<key) //寻找比左端key大的数 
            i++;
        if(i<=j) { //此时若符合条件 
            swap(a[i],a[j]); //交换数，使得左小右大 
            i++;
            j--;
        }
    }
    if(L<j) Qsort(a,L,j); //未越界继续执行 
    if(R>i) Qsort(a,i,R);//未越界继续执行 
}
int main() {
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,a[100000+5],c=0;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    
    Qsort(a,0,n-1);
    for(int i=1;i<n;i++)
        if(a[i-1]==a[i]) {
            a[i-1]=-1;
            c++;
        }
    
    cout<<n-c<<endl;
    for(int i=0;i<n;i++)
        if(a[i]!=-1) cout<<a[i]<<" ";
    //fclose(stdin);
    //fclose(stdout);
    return 0;
}
