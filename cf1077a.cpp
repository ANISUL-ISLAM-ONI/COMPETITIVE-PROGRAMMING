#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		long long a, b, k;
		cin >> a >> b >> k;
		long long rem = k % 2;
		k /= 2;
		long long sum = a * k;
		sum += (rem * a);
		sum -= (k * b);
		cout << sum << "\n";
	}
	return 0;
}
