#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int ma = max(a, b);
	if(a == b) cout << "Second\n";
	else{
		if(ma == a) cout << "First\n";
		else cout << "Second\n";
	}
	return 0;
}
