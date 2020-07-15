#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n, m;
		cin >> n >> m;
		int sum = 0;
		for(int i = 0; i < n; i++){
			int a;
			cin >> a;
			sum += a;
		}
		if(sum >= m){
			cout << m << "\n";
		}
		else{
			cout << sum << "\n";
		}
	}
	return 0;
}
