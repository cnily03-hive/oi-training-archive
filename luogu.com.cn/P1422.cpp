#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	int a;
	double out;
	cin>>a;
	if(a<=150)
		out=a*0.4463;
	else if(a<=400)
		out=150*0.4463+(a-150)*0.4663;
	else
		out=150*0.4463+(400-150)*0.4663+(a-400)*0.5663;
	printf("%0.1lf",out);
	return 0;
}
