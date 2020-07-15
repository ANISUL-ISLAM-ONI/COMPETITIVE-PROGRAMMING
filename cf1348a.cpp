#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int a = pow(2, n), b = 0, len = n / 2;
		for(int i = 1; i < len; i++) a += pow(2, i);
		for(int i = len; i < n; i++) b += pow(2, i);
		cout << abs(a - b) << "\n";
	}
	return 0;
}
