#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int t = 0; t < T; t++){
		int w;
		cin >> w;
		bool ch = true;
		int val;
		for(int i = 0; i < w; i++){
			int a, b;
			cin >> a >> b;
			int dif = a - b;
			if(i == 0){
				val = dif;
				continue;
			}
			if(dif < val || dif > val) ch = false;
		}
		if(ch){
			cout << "yes\n";
		}
		else{
			cout << "no\n";
		}
		if(t != T-1) cout << "\n";
	}
	return 0;
}
