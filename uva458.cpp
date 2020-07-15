#include<bits/stdc++.h>

using namespace std;

int main(){
	string strg;
	while(getline(cin, strg)){
		int len = strg.length();
		for(int i = 0; i < len; i++){
			char a = strg[i] - 7;
			cout << a;
		}
		cout << "\n";
	}
	return 0;
}
