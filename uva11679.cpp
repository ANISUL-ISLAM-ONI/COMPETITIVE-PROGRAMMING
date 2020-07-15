#include <bits/stdc++.h>

using namespace std;

int main(){
	int b, n;
	while(cin >> b >> n){
		if(b == 0 && n == 0) break;
		int r[b];
		int bank[b];
		for(int i = 0; i < b; i++){
			cin >> r[i];
			bank[i] = 0;
		}
		for(int i = 0; i < n; i++){
			int d, c, v;
			cin >> d >> c >> v;
			bank[d - 1] -= v;
			bank[c - 1] += v;
		}
		bool ch = true;
		for(int i = 0; i < b; i++){
			int val = r[i] + bank[i];
			if(val < 0){
				ch = false;
				break;
			}
		}
		if(ch) cout << "S\n";
		else cout << "N\n";
	}
}
