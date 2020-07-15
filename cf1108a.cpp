#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		cout << a << " ";
		if(c != a) cout << c << "\n";
		else cout << d << "\n";
	}
	return 0;
}
