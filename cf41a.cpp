#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	reverse(str.begin(), str.end());
	string rts;
	cin >> rts;
	if(str == rts) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
