#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, co = 0;
	cin >> n;
	while(n != 0){
		if(n % 10 == 4 || n % 10 == 7) co++;
		n /= 10;
	}
	if(co == 4 || co == 7) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
