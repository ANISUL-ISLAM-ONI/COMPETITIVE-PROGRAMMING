#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	while(cin >> str){
		if(str == "0") break;
		int len = str.length() - 1;
		int sum = 0;
		for(int i = 0; i <= len; i++){
			int a = str[i] - '0';
			if(i % 2 == 0) sum -= a;
			else sum += a;
		}
		if(sum % 11 == 0) cout << str << " is a multiple of 11.\n";
		else cout << str << " is not a multiple of 11.\n";
	}
	return 0;
}
