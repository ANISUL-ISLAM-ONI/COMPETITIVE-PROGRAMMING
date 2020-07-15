#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	while(getline(cin, str)){ // index 0 is str;
		if(str == "END") break;
		string dump = "";
		int i = 0;
		while(1){
			int len = str.length(); // 0.len;
			dump = to_string(len); // index 1 is dump;
			i++;
			if(str == dump) break;
			len = dump.length(); // 1.len
			str = to_string(len); // index 2 is str;
			i++;
			if(str == dump) break;
		}
		cout << i << "\n";
	}
	return 0;
}
