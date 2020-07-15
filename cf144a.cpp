#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, ma = 0, mi = 101, mai = 0, mii = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int a;
		cin >> a;
		if(a <= mi){
			mi = a;
			mii = i;
		}
		if(a > ma){
			ma = a;
			mai = i;
		}
	}
	int res;
	if(mai < mii){
		res = (mai - 1) + (n - mii);
	}
	else{ 
		res = (mai - 2) + (n - mii);
	}
	cout << res << "\n";
	return 0;
}
