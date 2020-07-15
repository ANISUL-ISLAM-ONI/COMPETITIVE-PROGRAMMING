#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n, odd = 0, even = 0, sum = 0;
		cin >> n;
		while(n--){
			int a;
			cin >> a;
			sum += a;
			if(a % 2 == 1) odd++;
			else even++;
		}
		if(sum % 2 == 1 || (odd > 0 && even > 0)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
