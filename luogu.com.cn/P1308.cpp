#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
char wordin[10+5],word[10+5],atc[1000000+5],eaw[10+5]; //atc: article, eaw: each word in the artile
int main() {
    int i=0,fap,count=0,f_index; //fap: first appeared, f_index: the first appered index
    //�������----------
    while((wordin[i++]=getchar())!='\n');
    //����---------- 
	strncpy(word,wordin,i-1);
    //��ȥ\n----------
    for(int j=0;j<strlen(word);j++)
        word[j]=toupper(word[j]);
    //ȫ����д----------
    i=0;
    while((atc[i]=getchar())!=EOF) {
        if(atc[i]!=' ' && atc[i]!='\n') {
        	if(count==0 && strlen(eaw)==0)
        		f_index=i;
        	eaw[strlen(eaw)]=atc[i];
		}
        else if(eaw[0]!=0){
        	for(int j=0;j<strlen(eaw);j++)
        		eaw[j]=toupper(eaw[j]);
        	if(count==0)
        		fap=f_index;
        	if(strcmp(word,eaw)==0)
        		count++;
        	for(int j=0;j<15;j++)
        		eaw[j]=0;
		}
		i++;
    }
    //----------
    if(count>0) cout<<count<<" "<<fap;
    else cout<<-1;
    return 0;
}
