#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	bool ch = false;
	for(int i = 0; i < 5; i++){
		string rts;
		cin >> rts;
		if(str[0] == rts[0] || str[1] == rts[1]) ch = true;
	}
	if(ch) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
