#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	getchar();
	for(int i = 1; i <= T; i++){
		string str[52];
		for(int j = 0; j < 52; j++) cin >> str[j];
		cout << "Case " << i << ": " << str[32] << "\n";
	}
	return 0;
}
