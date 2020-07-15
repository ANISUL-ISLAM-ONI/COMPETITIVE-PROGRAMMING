#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	while(cin >> str){
		int len = str.length();
		for(int i = 0; i < len; i++){
			if(str[i] == '0') cout << "0";
			else if(str[i] == '1') cout << "1";
			else if(str[i] == '-') cout << "-";
			else if(str[i] >= 'A' && str[i] <= 'C') cout << "2";
			else if(str[i] >= 'D' && str[i] <= 'F') cout << "3";
			else if(str[i] >= 'G' && str[i] <= 'I') cout << "4";
			else if(str[i] >= 'J' && str[i] <= 'L') cout << "5";
			else if(str[i] >= 'M' && str[i] <= 'O') cout << "6";
			else if(str[i] >= 'P' && str[i] <= 'S') cout << "7";
			else if(str[i] >= 'T' && str[i] <= 'V') cout << "8";
			else if(str[i] >= 'W' && str[i] <= 'Z') cout << "9";
		}
		cout << "\n";
	}
	return 0;
}
