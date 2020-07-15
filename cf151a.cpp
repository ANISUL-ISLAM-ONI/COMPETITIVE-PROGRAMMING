#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	l *= k;
	l /= nl;
	d *= c;
	p /= np;
	int res = min(l, d);
	res = min(res, p);
	cout << res / n << "\n";
	return 0;
}
