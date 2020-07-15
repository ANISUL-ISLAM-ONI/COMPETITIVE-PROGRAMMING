#include <bits/stdc++.h>

using namespace std;

int main(){
	long long k, n, w;
	cin >> k >> n >> w;
	long long total = ((w * (w + 1))/ 2) * k;
	total -= n;
	if(total < 0) cout << "0\n";
	else cout << total << "\n";
	return 0;
}
