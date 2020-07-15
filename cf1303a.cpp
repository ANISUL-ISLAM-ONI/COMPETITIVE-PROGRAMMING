#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	getchar();
	while(T--){
		string str;
		cin >> str;
		int len = str.length();
		int co = 0, re = 0;
		bool ch = false;
		for(int i = 0; i < len; i++){
			if(str[i] == '0'){
				if(ch) re++;
			}
			else{
				ch = true;
				co += re;
				re = 0;
			}
		}
		cout << co << "\n";
	}
	return 0;
}
