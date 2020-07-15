#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		a %= b;
		if(a) cout << b - a << "\n";
		else cout << a << "\n";
	}
	return 0;
}
