#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	string up[n];
	string down[m];
	int len = n * m;
	len++;
	string res[len];
	for(int i = 0; i < n; i++) cin >> up[i];
	for(int i = 0; i < m; i++) cin >> down[i];
	int x = 1, y = 0;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(y == m){
				res[x] = up[j] + down[0];
				y = 1;
			}
			else{
				res[x] = up[j] + down[y];
				y++;
			}
			x++;
		}
	}
	len--;
	res[0] = res[len];
	int q;
	cin >> q;
	while(q--){
		int a;
		cin >> a;
		cout << res[a % len] << "\n";
	}
	return 0;
}
