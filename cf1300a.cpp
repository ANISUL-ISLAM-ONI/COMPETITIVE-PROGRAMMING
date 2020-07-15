#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n, sum = 0, co = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			int a;
			cin >> a;
			if(a == 0){
				co++;
				sum++;
			}
			else sum += a;
		}
		if(sum == 0){
			if(co == 0) cout << "1\n";
			else cout << co + 1 << "\n";
		}
		else cout << co << "\n";
	}
	return 0;
}
