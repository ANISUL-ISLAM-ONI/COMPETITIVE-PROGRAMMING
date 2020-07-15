#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		int top = 1, down = 6;
		int north = 2, south = 5;
		int west = 3, east = 4;
		while(n--){
			string str;
			cin >> str;
			int dump = top;
			if(str == "north"){
				top = south;
				south = down;
				down = north;
				north = dump;
			}
			else if(str == "south"){
				top = north;
				north = down;
				down = south;
				south = dump;
			}
			else if(str == "east"){
				top = west;
				west = down;
				down = east;
				east = dump;
			}
			else{
				top = east;
				east = down;
				down = west;
				west = dump;
			}
		}
		cout << top << "\n";
	}
	return 0;
}
