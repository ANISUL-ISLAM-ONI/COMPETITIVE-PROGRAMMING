#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string str;
	cin >> str;
	getchar();
	map<char, int> mape;
	for(int i = 0; i < n; i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			char ch = tolower(str[i]);
			mape[ch] = 1;
		}
		else mape[str[i]] = 1;
	}
	if(mape.size() == 26) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
