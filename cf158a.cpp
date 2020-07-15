#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int res = 0, sev;
	for(int i = 1; i <= n; i++){
		int a;
		cin >> a;
		if(i == k) sev = a;
		if(i > k){
			if(a > 0 && a == sev) res++;
			continue;
		}
		if(a > 0) res++;
	}
	cout << res << "\n";
	return 0;
}
