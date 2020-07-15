#include<bits/stdc++.h>

using namespace std;

int main(){
	string strg;
	while(getline(cin, strg)){
		int count = 0, flag = 0;
		int len = strg.length();
		for(int i = 0; i < len; i++){
			if((strg[i+1] >= 'A' && strg[i+1] <= 'Z') || (strg[i+1] >= 'a' && strg[i+1] <= 'z'))  flag = 1;
			else{
				count += flag;
				flag = 0;
			}
		}
		count += flag;
		cout << count << "\n";
	}
	return 0;
}
