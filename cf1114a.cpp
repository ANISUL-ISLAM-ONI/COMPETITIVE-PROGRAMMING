#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, y, z, a, b, c;
	cin >> x >> y >> z >> a >> b >> c;
	if(x > a) cout << "NO\n";
	else{
		a -= x;
		b += a;
		if(y > b) cout << "NO\n";
		else{
			b -= y;
			c += b;
			if(z > c) cout << "NO\n";
			else cout << "YES\n";
		}
	}
}
