#include <bits/stdc++.h>

using namespace std;

string funlower(string abc){
	int len = abc.length();
	string res = "";
	for(int i = 0; i < len; i++){
		if(abc[i] >= 'A' && abc[i] <= 'Z'){
			char ch = tolower(abc[i]);
			res += ch;
		}
		else res += abc[i];
	}
	return res;
}

int main(){
	string a, b;
	cin >> a >> b;
	a = funlower(a);
	b = funlower(b);
	map<string, int> mape;
	mape[a] = 1;
	mape[b] = 1;
	if((mape.begin() -> first) == a && (mape.begin() -> first) == b) cout << "0\n";
	else if((mape.begin() -> first) == a) cout << "-1\n";
	else cout << "1\n";
	return 0;
}
