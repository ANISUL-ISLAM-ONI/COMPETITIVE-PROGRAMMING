#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	scanf("%d\n",&T);
	while(T--){
		string str;
		getline(cin, str);
		int len = str.length();
		string dump = "";
		for(int i = 0; i < len; i++){
			if(str[i] == ' ') continue;
			dump += str[i];
		}
		len = dump.length();
		int sum = 0;
		for(int i = 0; i < len; i++){
			if(i % 2 == 0){
				int d = dump[i] - '0';
				d *= 2;
				sum += (d % 10);
				sum += (d / 10);
			}
			else{
				sum += (dump[i] - '0');
			}
		}
		if(sum % 10 == 0) cout << "Valid\n";
		else cout << "Invalid\n";
	}
	return 0;
}
