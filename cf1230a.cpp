#include <bits/stdc++.h>

using namespace std;

int main(){
	int a[4];
	for(int i = 0; i < 4; i++) cin >> a[i];
	sort(a, a + 4);
	int alice = a[3];
	int bob = a[2];
	for(int i = 1; i >= 0; i--){
		if(alice >= bob){
			bob += a[i];
		}
		else alice += a[i];
	}
	if(alice == bob) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
