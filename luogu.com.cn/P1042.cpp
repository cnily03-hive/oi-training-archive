#include <iostream>
#include <cstdio>
using namespace std;

int count11[5682][2],
	count21[2977][2];

char c[25*2500+2500];

int main() {
	int i=0,
		bs11=0, bs21=0,
		lun11=0, lun21=0;
	while(1) {
		c[i]=getchar();
		while(c[i]=='\n')
			c[i]=getchar(); //"\n", bye bye!
		if(c[i]=='E')
			break;
		
		if(bs11==11) { bs11=0; lun11++; }
		if(bs21==21) { bs21=0; lun21++; }
		
		if(c[i]=='W') {
			count11[lun11][0]++;
			count21[lun21][0]++;
		} else if(c[i]=='L') {
			count11[lun11][1]++;
			count21[lun21][1]++;
		}
		bs11++;
		bs21++;
		i++;
	}
	
	for(int p=0; p<=lun11; p++)
		cout<< count11[p][0] <<":"<< count11[p][1] <<endl;
	cout<<endl;
	for(int p=0; p<=lun21; p++)
		cout<< count21[p][0] <<":"<< count21[p][1] <<endl;
}
