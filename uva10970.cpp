#include<bits/stdc++.h>

using namespace std;

int main(){
	int r,c;
	while(cin >> r >> c){
		cout << (r * (c - 1)) + (r - 1) << "\n";
	}
	return 0;
}
