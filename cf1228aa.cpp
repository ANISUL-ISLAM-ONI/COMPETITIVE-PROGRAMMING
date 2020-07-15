#include <bits/stdc++.h>

using namespace std;

bool check(int n){
	map<char, int> m;
	string num = to_string(n);
	int len = num.length();
	for(int x = 0; x < len; x++){
		if(m[num[x]] == 1) return false;
		m[num[x]]++;
	}
	m.clear();
	return true;
}

int main(){
	int a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i++){
		if(check(i)){
			cout << i << "\n";
			return 0;
		}
	}
	cout << "-1\n";
}
