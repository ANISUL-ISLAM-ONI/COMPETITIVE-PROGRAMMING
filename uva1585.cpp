#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 0; i < T; i++){
		string str;
		cin >> str;
		int len = str.length();
		int sum = 0, count = 0;
		for(int j = 0; j < len; j++){
			if(str[j] == 'X') count = 0;
			else{
				count++;
				sum += count;
			}
		}
		cout << sum << "\n";
	}
	return 0;
}
