#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, mis = 0, chs = 0;
	cin >> n;
	while(n--){
		int a, b;
		cin >> a >> b;
		if(a > b) mis++;
		else if(a < b) chs++;
	}
	if(mis > chs) cout << "Mishka\n";
	else if(mis < chs) cout << "Chris\n";
	else cout << "Friendship is magic!^^\n";
	return 0;
}
