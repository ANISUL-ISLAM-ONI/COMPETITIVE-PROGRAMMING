#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	bool ch = true;
	cin >> n >> m;
	getchar();
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			string a;
			cin >> a;
			if(a[0] == 'M' || a[0] == 'Y' || a[0] == 'C') ch = false;
		}
	}
	if(ch) cout << "#Black&White\n";
	else cout << "#Color\n";
}
