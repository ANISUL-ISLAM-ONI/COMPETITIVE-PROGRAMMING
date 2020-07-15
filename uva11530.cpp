#include<bits/stdc++.h>

using namespace std;

int main(){
	map<char,int> mape;
	mape['a'] = mape['d'] = mape['g'] = mape['j'] = mape['m'] = mape['p'] = mape['t'] = mape['w'] = mape[' '] = 1;
	mape['b'] = mape['e'] = mape['h'] = mape['k'] = mape['n'] = mape['q'] = mape['u'] = mape['x'] = 2;
	mape['c'] = mape['f'] = mape['i'] = mape['l'] = mape['o'] = mape['r'] = mape['v'] = mape['y'] = 3;
	mape['s'] = mape['z'] = 4;
	int T;
	cin >> T;
	getchar();
	for(int i = 1; i <= T; i++){
		string str;
		getline(cin, str);
		int len = str.length();
		int sum = 0;
		for(int j = 0; j < len; j++){
			sum += mape[str[j]];
		}
		cout << "Case #" << i << ": " << sum << "\n";
	}
	return 0;
}
