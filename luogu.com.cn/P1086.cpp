#include <iostream>
#include <cstdio>
#include <cmath>
#define MAX_INF 501
#define MIN_INF -1
using namespace std;

int N,M,Time,sum,
	max_x,max_y, now_x, now_y, step,
	map[25][25];

void MAX() {
	int max = MIN_INF;
	for(int i=0; i<N; i++)
		for(int j=0; j<M; j++)
			if(map[i][j] > max) {
				max = map[i][j];
				max_x = i;
				max_y = j;
			}
}

int main() {
	cin>>N>>M>>Time;
	for(int i=0; i<N; i++)
		for(int j=0; j<M; j++)
			cin>>map[i][j];
	
	//DFS:
	Time-=2; //Leave road, reach road
	bool first = true;
	while(Time>=0) {
		//Var the (x,y) of this time
		MAX();
		if(map[max_x][max_y]==0) break;
		if(first) {
			now_x=0;
			now_y=max_y;
		}
		
		step = abs(now_x-max_x) + abs(now_y-max_y); //The step(time) you reach there
		if( ( step+1+abs(max_x) ) <= Time ) {
			Time -= step; //Spend time doing this
			now_x = max_x; now_y = max_y; //Reached max point
			sum += map[max_x][max_y]; Time -= 1;//Results add, spend 1-time
			map[max_x][max_y] = 0; //The next executing cannot have the same max vaule
		}
		else break;
		
		first=false;
	}
	//DFS end
	
	cout<<sum;
	return 0;
}
