#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	int amount = 0;
	while(T--){
		string str;
		cin >> str;
		if(str == "donate"){
			int k;
			cin >> k;
			amount += k;
		}
		else if(str == "report") cout << amount << "\n";
	}
	return 0;
}
