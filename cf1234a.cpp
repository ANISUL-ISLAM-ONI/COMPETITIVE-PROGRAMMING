#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		long long n, sum = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			long long a;
			cin >> a;
			sum += a;
		}
		if(sum % n == 0) cout << sum / n << "\n";
		else cout << (sum / n) + 1 << "\n";
	}
	return 0;
}
