#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	int len = str.length();
	string up = "", down = "";
	int u = 0;
	for(int i = 0; i < len; i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			u++;
			up += str[i];
			char x = tolower(str[i]);
			down += x;
		}
		else{
			down += str[i];
			char x = toupper(str[i]);
			up += x;
		}
	}
	if(u > (len - u)) cout << up << "\n";
	else cout << down << "\n";
	return 0;
}
