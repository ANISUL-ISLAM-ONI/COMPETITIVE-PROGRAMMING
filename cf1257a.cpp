#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n, x, a, b;
		cin >> n >> x >> a >> b;
		int ma = max(a, b);
		int mi = min(a, b);
		while(x){
			if(mi != 1){
				mi--;
				x--;
				continue;
			}
			if(ma != n){
				ma++;
				x--;
				continue;
			}
			break;
		}
		cout << ma - mi << "\n";
	}
	return 0;
}
