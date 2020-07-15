#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int abc[3], n, sum = 0;
		cin >> abc[0] >> abc[1] >> abc[2] >> n;
		sort(abc, abc + 3);
		sum += (abc[2] - abc[0]);
		sum += (abc[2] - abc[1]);
		if(sum <= n){
			n -= sum;
			if(n % 3 == 0) cout << "YES\n";
			else cout << "NO\n";
		}
		else cout << "NO\n";
	}
	return 0;
}
