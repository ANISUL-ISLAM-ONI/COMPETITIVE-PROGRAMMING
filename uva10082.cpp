#include<bits/stdc++.h>

using namespace std;

int main(){
	string row = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	string strg;
	while(getline(cin, strg)){
		int len = strg.length();
		for(int i = 0; i < len; i++){
			for(int j = 1; j < 48; j++){
				if(strg[i] == row[j]){
					strg[i] = row[j - 1];
					break;
				}
			}
		}
		cout << strg << "\n";
	}
	return 0;
}
