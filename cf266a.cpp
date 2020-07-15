#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, c = 0;
	cin >> n;
	string str;
	cin >> str;
	char ch = str[0];
	for(int i = 1; i < n; i++){
		if(str[i] == ch) c++;
		else ch = str[i];
	}
	cout << c << "\n";
	return 0;
}
