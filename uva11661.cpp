#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		string str;
		cin >> str;
		int mi = INT_MAX;
		int count = 0;
		char c = 'a';
		for(int i = 0; i < n; i++){
			if(c == 'R' && str[i] == 'D'){
				count++;
				mi = min(mi, count);
			}
			if(c == 'D' && str[i] == 'R'){
				count++;
				mi = min(mi, count);
			}
			if(str[i] == 'R' || str[i] == 'D'){
				c = str[i];
				count = 0;
			}
			else count++;
			if(str[i] == 'Z'){
				mi = 0;
				break;
			}
		}
		cout << mi << "\n";
	}
	return 0;
}
