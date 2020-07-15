#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		if(n == 2) cout << n << "\n";
		else{
			if(n % 2 == 1) cout << "1\n";
			else cout << "0\n";
		}
	}
	return 0;
}
