#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	int len = str.length();
	for(int i = 0; i < len; i++){
		if(i == 0){
			if(str[i] >= 'a' && str[i] <= 'z'){
				char dump = toupper(str[i]);
				cout << dump;
				continue;
			}
		}
		cout << str[i];
	}
	cout << "\n";
	return 0;
}
