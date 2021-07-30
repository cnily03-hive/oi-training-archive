#include <iostream>
using namespace std;

int x_mark[9],y_mark[9],
	x_final,y_final,x_horse,y_horse;
long long dp[316][316]; // I heard that the data might be so big so I did so

// This is the function that init the places horse can arrive at
void init_horse() {
	x_mark[0]=x_horse;
	x_mark[1]=x_horse+1;
	x_mark[2]=x_horse+1;
	x_mark[3]=x_horse-1;
	x_mark[4]=x_horse-1;
	x_mark[5]=x_horse+2;
	x_mark[6]=x_horse+2;
	x_mark[7]=x_horse-2;
	x_mark[8]=x_horse-2;
	
	y_mark[0]=y_horse;
	y_mark[1]=y_horse+2;
	y_mark[2]=y_horse-2;
	y_mark[3]=y_horse+2;
	y_mark[4]=y_horse-2;
	y_mark[5]=y_horse+1;
	y_mark[6]=y_horse-1;
	y_mark[7]=y_horse+1;
	y_mark[8]=y_horse-1;
}

// Judge whether the soider can walk to this place 
bool unwalk(int x, int y) {
	for(int i=0;i<9;i++)
		if(x_mark[i]==x && y_mark[i]==y)
			return true;
	return false;
}

int main() {
	cin >> x_final >> y_final >> x_horse >> y_horse;
	
	//Init places that horse can arrive at
	init_horse();
	
	//Init the first two values in dp[][]
	int dp_init=2,flag1=1,flag2=1; //dp_init is used to judge whether the soider can walk at least one step
	for(int i=0;i<9;i++) {
		if(x_mark[i]==1 && y_mark[i]==0) dp_init--,flag1=0;
		if(x_mark[i]==0 && y_mark[i]==1) dp_init--,flag2=0;
	}
	if(dp_init==0) { //If the soider could hardly move, say bye bye to him!
		cout << 0;
		return 0;
	} else {
		dp[1][0] = flag1?1:0;
		dp[0][1] = flag2?1:0;
	}
	
	//DP
	for(int x=1;x<=x_final;x++) // Init x
		if(!dp[x][0]) // I don't want to destory the inits above
			dp[x][0] = unwalk(x,0)?0:dp[x-1][0];
	for(int y=1;y<=y_final;y++) // Init y
		if(!dp[0][y]) // I don't want to destory the inits above
			dp[0][y] = unwalk(0,y)?0:dp[0][y-1];
	for(int x=1;x<=x_final;x++) // Init x,y
		for(int y=1;y<=y_final;y++) {
			dp[x][y] = unwalk(x,y)?0:dp[x-1][y]+dp[x][y-1];
		}
	
	//Say out the answer! How happy I pass the problem!
	cout << dp[x_final][y_final];
}
