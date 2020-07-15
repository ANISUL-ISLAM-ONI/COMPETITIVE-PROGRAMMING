#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		string str;
		cin >> str;
		int len = str.length();
		if(str == "1" || str == "4" || str == "78") cout << "+\n";
		else if(str[len - 1] == '5' && str[len - 2]) cout << "-\n";
		else if(str[0] == '9' && str[len - 1] == '4') cout << "*\n";
		else if(str[0] == '1' && str[1] == '9' && str[2] == '0') cout << "?\n";
	}
	return 0;
}
