#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	while(cin >> str){
		if(str[0] == '0') break;
		int len = str.length();
		int i = 0,sum = 0;
		while(len){
			int a = str[i] - '0';
			if(a > 0){
				sum += (a * (pow(2,len) - 1));
			}
			len--;
			i++;
		}
		cout << sum << "\n";
	}
	return 0;
}
