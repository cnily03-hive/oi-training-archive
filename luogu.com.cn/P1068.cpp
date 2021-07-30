#include <iostream>
#include <algorithm>
using namespace std;

struct in {
	int num;
	int mark;
} a[5000+5]; //I use "struct", why not use it?

bool compare_mark(in a, in b) {
	return a.mark>b.mark;
}
bool compare_num(in a, in b) {
	return a.num<b.num;
}
//As I use "struct" and "sort" together, "Compare" in sort's 3rd vaule is not available.

int main() {
	int n,hope;
	cin>>n>>hope;
	for(int i=0;i<n;i++)
		cin>>a[i].num>>a[i].mark;
	
	sort(a+0,a+n,compare_mark);
	
	int line_mark=a[hope*3/2-1].mark,
		line_num=hope*3/2, //Here, you should var the vaule for that next while may not execute.
		index=hope*3/2,clu; //"clu" is the beginning index for each repeat place.
	
	//I am ready to get ranges(As repeating the last mark).
	while(a[index].mark==line_mark) {
		line_num=index+1;
		//You have to know that here, "line_mark" and "line_num" all start from 1 instead 0 like Arr.(As it will finish with modern counting -- from 1 to count).
		index++;
	}//Now, I have already get ranges.
	
	//I'm going to make "num" in New Struct to sort.
	index=0;
	while(index<=line_num) {
		if(index==0){
			clu=0;
		} else if(a[index].mark!=a[index-1].mark || index==line_num){
			//index==line_num shows that you shouldn't forget to do a last sort when everything finish.
			//But here you have to have a mind that index start from zero and line_num start from one.
			if(index-clu>1)
				sort(a+clu,a+(index),compare_num);
			clu=index; //reset the beginning index.
		}
		index++;
	}
	
	//now, outing time.
	cout<<line_mark<<" "<<line_num<<endl;
	for(int i=0;i<line_num;i++)
		cout<<a[i].num<<" "<<a[i].mark<<endl;
	
}
