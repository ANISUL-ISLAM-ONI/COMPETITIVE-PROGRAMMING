#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int res = min(a, b);
	if(res == a){
		res += min(c, a + b);
		res += min(b, a + c);
	}
	else{
		res += min(c, a + b);
		res += min(a, b + c);
	}
	cout << res << "\n";
	return 0;
}
