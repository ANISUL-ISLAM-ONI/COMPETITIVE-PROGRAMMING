#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, ma = 0, am = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		ma = max(ma, a);
	}
	cin >> m;
	for(int i = 0; i < m; i++){
		int a;
		cin >> a;
		am = max(am, a);
	}
	cout << ma << " " << am << "\n";
	return 0;
}
