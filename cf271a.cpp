#include <bits/stdc++.h>

using namespace std;

bool check(string str){
	if(str[0] != str[1] && str[1] != str[2] && str[2] != str[0] && str[0] != str[3] && str[1] != str[3] && str[2] != str[3]) return true;
	else return false;
}

int main(){
	int y;
	cin >> y;
	y++;
	while(!(check(to_string(y)))) y++;
	cout << y << "\n";
	return 0;
}
