#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	getchar();
	string str;
	cin >> str;
	int len = str.length();
	int sum = 0;
	for(int i = 0; i < len; i++){
		if(str[i] == '1') sum += a;
		else if(str[i] == '2') sum += b;
		else if(str[i] == '3') sum += c;
		else sum += d;
	}
	cout << sum << "\n";
	return 0;
}
