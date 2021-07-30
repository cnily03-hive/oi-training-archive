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
    int key=a[(L+R)/2]; //����Ԫ�� 
    int i=L; //ǰ��ָ�� 
    int j=R; //����ָ�� 
    while(i<=j) {
        while(a[j]>key) //Ѱ�ұ��Ҷ�keyС���� 
            j--;
        while(a[i]<key) //Ѱ�ұ����key����� 
            i++;
        if(i<=j) { //��ʱ���������� 
            swap(a[i],a[j]); //��������ʹ����С�Ҵ� 
            i++;
            j--;
        }
    }
    if(L<j) Qsort(a,L,j); //δԽ�����ִ�� 
    if(R>i) Qsort(a,i,R);//δԽ�����ִ�� 
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
