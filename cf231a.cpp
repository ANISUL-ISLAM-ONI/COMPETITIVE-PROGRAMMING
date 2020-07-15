#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, res = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int a, b, c;
		cin >> a >> b >> c;
		int d = a + b + c;
		if(d > 1) res++;
	}
	cout << res << "\n";
	return 0;
}
