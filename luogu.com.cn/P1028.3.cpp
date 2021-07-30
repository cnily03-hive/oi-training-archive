#include <iostream>
using namespace std;
/*
 *对于任意符合条件的x，设nature[x]表示对于x具有该性质的种类
 *则对于可能的n，
 	nature[n]=nature[n/2]+nature[n/2-1]+nature[n/2-2]+……nature[2]+nature[1]+1【1是代表它本身】
 *显然0<=n<=1000，为了避免超时，不运用函数，而运用for循环较好
*/
int main() {
	int nature[1000+5]={0},n; //增大数组的范围可以在短时间内测出更大的结果
	cin>>n;
	for(int i=1;i<=n;i++)
		nature[i]=1;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i/2;j++)
			nature[i]+=nature[j];
	cout<<nature[n];
	return 0;
}
