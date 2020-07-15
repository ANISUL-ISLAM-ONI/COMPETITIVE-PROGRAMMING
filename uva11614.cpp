#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		long long n, res;
		cin >> n;
		res = (sqrt((1 + (8 * n))) - 1) / 2;
		cout << res << "\n";
	}
	return 0;
}
