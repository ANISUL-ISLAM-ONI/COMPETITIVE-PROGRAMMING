#include <bits/stdc++.h>

using namespace std;

int main(){
	string str = "", dump;
	cin >> dump;
	str += dump;
	cin >> dump;
	str += dump;
	cin >> dump;
	sort(str.begin(), str.end());
	sort(dump.begin(), dump.end());
	if(str == dump) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
