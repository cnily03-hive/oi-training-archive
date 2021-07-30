#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char c[50+5];
int main() {
    int n,i=0;
    scanf("%d\n",&n);
    gets(c);
    i=strlen(c);
    
    for(int j=0;j<i;j++) {
        if(c[j]+n<='z')
            cout<<char(c[j]+n);
        else
            cout<<char('a'+c[j]+n-'z'-1);
    }
    return 0;
}
