#include <bits/stdc++.h>

using namespace std;

int main(){
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	long long mi = min(a, c);
	mi = min(mi, d);
	if(mi == a){
		long long mii = min(a, b);
		mii *= 32;
		mi *= 256;
		cout << max(mi, mii) << "\n";
	}
	else{
		long long mii = min(a, b);
		mii *= 32;
		a -= mi;
		mi *= 256;
		long long x = min(a, b);
		mi += (32 * x);
		cout << max(mi, mii) << "\n";
	}
	return 0;
}
