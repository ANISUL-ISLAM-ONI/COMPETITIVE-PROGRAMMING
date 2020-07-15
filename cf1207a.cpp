#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int b, p, f, h, c;
		cin >> b >> p >> f >> h >> c;
		if(h >= c){
			b /= 2;
			p = min(p, b);
			b -= p;
			f = min(f, b);
			cout << (p * h) + (f * c) << "\n";
		}
		else{
			b /= 2;
			f = min(f, b);
			b -= f;
			p = min(p, b);
			cout << (p * h) + (f * c) << "\n";
		}
	}
	return 0;
}
