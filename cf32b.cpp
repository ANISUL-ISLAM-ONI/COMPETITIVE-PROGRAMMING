#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	int len = str.length();
	char pre = 'a';
	for(int i = 0; i < len; i++){
		if(str[i] == '.'){
			if(pre == '-'){
				cout << "1";
				pre = 'a';
				continue;
			}
			else{
				cout << "0";
				pre = 'a';
				continue;
			}
		}
		else{
			if(pre == '-'){
				cout << "2";
				pre = 'a';
				continue;
			}
		}
		pre = str[i];
	}
	cout << "\n";
	return 0;
}
