#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, sum = 0;
	cin >> n;
	getchar();
	string up, down;
	cin >> up >> down;
	for(int i = 0; i < n; i++){
		int u = up[i] - '0';
		int d = down[i] - '0';
		int ma = max(u, d);
		int mi = min(u, d);
		int te = 10 - ma;
		te += mi;
		sum += min(te, ma - mi);
	}
	cout << sum << "\n";
	return 0;
}
