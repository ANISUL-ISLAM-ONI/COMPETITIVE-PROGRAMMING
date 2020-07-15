#include<bits/stdc++.h>

using namespace std;

int digit(char a){
	return a - '0';
}

int sum(int n){
	int s = 0;
	while(n){
		s += (n % 10);
		n /= 10;
	}
	return s;
}

int main(){
	string str;
	while(cin >> str){
		if(str[0] == '0') break;
		int len = str.length();
		int dump = 0;
		for(int i = 0; i < len; i++) dump += digit(str[i]);
		if(dump % 9 == 0){
			int count = 0;
			int du = dump;
			while(1){
				if(du / 9 == 1){
					count++;
					 break;
				}
				du = sum(du);
				count++;
			}
			cout << str << " is a multiple of 9 and has 9-degree " << count << ".\n";
		}
		else cout << str << " is not a multiple of 9.\n";
	}
}
