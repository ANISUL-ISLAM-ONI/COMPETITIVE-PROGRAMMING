#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ll u, v;
	while(cin >> u >> v){
		if(u == 0 && v == 0) break;
		ll a = min(u,v);
		ll b = max(u,v);
		ll max = 0, maxNo = 0;
		for(ll i = a; i <= b; i++){
			ll count = 0;
			ll x = i;
			while(x != 1){
				if(x % 2 == 0) x /= 2;
				else x = (3 * x) + 1;
				count++;
			}
			if(count > max){
				max = count;
				maxNo = i;
			}
		}
		if(a == 1 && (b == 1 || b == 2)) cout << "Between " << a << " and " << b << ", 1 generates the longest sequence of 3 values.\n";
		else cout << "Between " << a << " and " << b << ", " << maxNo << " generates the longest sequence of " << max << " values.\n";
	}
	return 0;
}
