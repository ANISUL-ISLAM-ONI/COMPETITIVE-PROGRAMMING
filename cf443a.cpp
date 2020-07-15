#include <bits/stdc++.h>

using namespace std;

int main(){
	map<char, int> mape;
	string str;
	getline(cin, str);
	int len = str.length();
	for(int i = 0; i < len; i++){
		if(str[i] >= 'a' && str[i] <= 'z') mape[str[i]] = 1;
	}
	cout << mape.size() << "\n";
	return 0;
}
