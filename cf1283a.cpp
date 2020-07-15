#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int a, b;
		cin >> a >> b;
		b += (a * 60);
		cout << (24 * 60) - b << "\n";
	}
	return 0;
}
