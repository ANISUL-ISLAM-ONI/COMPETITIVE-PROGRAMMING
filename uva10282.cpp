#include<bits/stdc++.h>

using namespace std;

int main(){
	map<string,string> pam;
	map<string,string>::iterator itr;
	string str;
	while(getline(cin, str)){
		if(str.length() == 0) break;
		string eng;
		string strgn;
		int len = str.length();
		int flag = 0;
		for(int i = 0; i < len; i++){
			if(str[i] == ' '){
				flag = 1;
				continue;
			}
			if(flag == 0) eng += str[i];
			else strgn += str[i];
		}
		pam[strgn] = eng;
	}
	while(cin >> str){
		if(pam[str].length() == 0) cout << "eh\n";
		else cout << pam[str] << "\n";
	}
	return 0;
}
