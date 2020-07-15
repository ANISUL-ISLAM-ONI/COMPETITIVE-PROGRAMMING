#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, res = 0;
	cin >> n >> k;
	while(n--){
		int a;
		cin >> a;
		if(5 - a >= k) res++;
	}
	cout << res / 3 << "\n";
	return 0;
}
