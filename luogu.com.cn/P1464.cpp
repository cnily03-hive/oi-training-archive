#include <iostream>
#include <cstdio>
using namespace std;
/*
 版权声明：http://blog.csdn.net/zjh_2017/article/details/78382268
 接下来学一个记忆化搜索（是个难点）
 来看一下斐波那契数列的板子：
 int f[max]={0};
 int f(int n) {
 	if (f[n]!=0) return f[n];
 	if (n<=2) return f[n]=1;
 	else return f[n]=f(n-2)+f(n-1);
 }
 可以这么理解：你先打一个不用记忆化搜索的板子，然后把它转换为记忆化搜索。记忆化搜索的话，要多加一个数组，用来存储已经求过的函数值。然后，你再在递归函数里面先加一句话——if （这个数组的值不为0） return 这个值；另外，后面的递归返回值里在前面多加一个——“数组=”递归返回值。也不知道看不看得懂，反正我大概知道是怎么用的了。

*/
long long m[20+5][20+5][20+5]={0};
long long w(long long a, long long b, long long c) {
	if(a<0) a=0;
	if(b<0) b=0;
	if(c<0) c=0;
	if(a>20) a=21;
	if(b>20) b=21;
	if(c>20) c=21;
	if(m[a][b][c]!=0) return m[a][b][c];
	else {
		if(a<=0||b<=0||c<=0)
			return 1;
		else if(a>20||b>20||c>20)
			return m[21][21][21]=w(20,20,20);
		else if(a<b && b<c)
			return m[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
		else return m[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
	}
}
int main() {
	long long a,b,c;
	while(1) {
		cin>>a>>b>>c;
		if(a==-1 && b==-1 && c==-1)
			return 0;
		else
			printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));
	}
}
