#include<bits/stdc++.h>

using namespace std;

int main(){
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int T;
	cin >> T;
	while(T--){
		int n, m;
		cin >> n >> m;
		if((n - 1) % (m - 1) != 0) cout << "cannot do this\n";
		else cout << (n - 1) / (m - 1) << "\n";
	}
	return 0;
}
