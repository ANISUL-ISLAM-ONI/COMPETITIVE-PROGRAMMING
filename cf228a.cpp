#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	map<int, int> mape;
	mape[a] = 1;
	mape[b] = 1;
	mape[c] = 1;
	mape[d] = 1;
	int s = mape.size();
	cout << 4 - s << "\n";
	return 0;
}
