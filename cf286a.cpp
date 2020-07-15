#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	sort(str.begin(), str.end());
	int co = 1;
	int len = str.length();
	char cp = str[0];
	for(int i = 1; i < len; i++){
		if(str[i] != cp){
			cp = str[i];
			co++;
		}
	}
	if(co % 2 == 0) cout << "CHAT WITH HER!\n";
	else cout << "IGNORE HIM!\n";
	return 0;
}
