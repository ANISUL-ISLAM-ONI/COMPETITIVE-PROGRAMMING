#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int x, y, a, b;
		cin >> x >> y >> a >> b;
		y -= x;
		a += b;
		if(y % a == 0) cout << y / a << "\n";
		else cout << "-1\n";
	}
	return 0;
}
