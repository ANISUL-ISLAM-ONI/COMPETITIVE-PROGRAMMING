#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		string str;
		cin >> str;
		int len = str.length();
		int l = len / n;
		for(int i = l - 1; i < len; i += l){
			int j = i;
			for(int k = 0; k < l; k++){
				cout << str[j];
				j--;
			}
		}
		cout << "\n";
	}
	return 0;
}
