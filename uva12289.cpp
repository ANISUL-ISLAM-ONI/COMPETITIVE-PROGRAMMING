#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 0; i < T; i++){
		string s;
		cin >> s;
		int len = s.length();
		if(len == 3){
			if(s[0] == 'o' && s[1] == 'n' && s[2] == 'e') printf("1\n");
			else if(s[0] == 'o' && s[1] == 'n') printf("1\n");
			else if(s[0] == 'o' && s[2] == 'e') printf("1\n");
			else if(s[1] == 'n' && s[2] == 'e') printf("1\n");
			else if(s[0] == 't' && s[1] == 'w' && s[2] == 'o') printf("2\n");
			else if(s[0] == 't' && s[1] == 'w') printf("2\n");
			else if(s[0] == 't' && s[2] == 'o') printf("2\n");
			else if(s[1] == 'w' && s[2] == 'o') printf("2\n");
		}
		else cout << "3\n";
	}
	return 0;
}
