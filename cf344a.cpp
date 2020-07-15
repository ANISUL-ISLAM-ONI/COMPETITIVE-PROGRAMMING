#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, co = 0;
	string ch = "";
	cin >> n;
	getchar();
	while(n--){
		string str;
		cin >> str;
		if(str != ch){
			co++;
			ch = str;
		}
	}
	cout << co << "\n";
	return 0;
}
