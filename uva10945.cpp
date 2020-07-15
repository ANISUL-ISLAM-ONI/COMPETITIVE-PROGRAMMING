#include<bits/stdc++.h>

using namespace std;

bool isChar(char a){
	if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) return true;
	else return false;
}

int main(){
	string str;
	while(getline(cin, str)){
		if(str == "DONE") break;
		string dump = "";
		bool check = true;
		int len = str.length();
		for(int i = 0; i < len; i++){
			if(isChar(str[i])) dump += tolower(str[i]);
		}
		len = dump.length();
		len--;
		int l = (len / 2) + 1;
		for(int i = 0; i < l; i++){
			if(dump[i] != dump[len - i]){
				check = false;
				break;
			}
		}
		if(check) cout << "You won't be eaten!\n";
		else cout << "Uh oh..\n";
	}
	return 0;
}
