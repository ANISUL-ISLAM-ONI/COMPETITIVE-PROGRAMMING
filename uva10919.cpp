#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	map<int, int> mape;
	while(cin >> n){
		if(n == 0) break;
		int m;
		cin >> m;
		bool ch = true;
		for(int i = 0; i < n; i++){
			int a;
			cin >> a;
			mape[a] = 1;
		}
		while(m--){
			int c, r, co = 0;
			cin >> c >> r;
			while(c--){
				int a;
				cin >> a;
				if(mape[a] == 1) co++;
			}
			if(co < r) ch = false;
		}
		if(ch) cout << "yes\n";
		else cout << "no\n";
		mape.clear();
	}
	return 0;
}
