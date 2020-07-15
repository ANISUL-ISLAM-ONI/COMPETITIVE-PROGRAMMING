#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, x, dis = 0;
	cin >> n >> x;
	while(n--){
		char a;
		long long b;
		cin >> a >> b;
		if(a == '+'){
			x += b;
		}
		else{
			if(x >= b){
				x -= b;
			}
			else dis++;
		}
	}
	cout << x << " " << dis << "\n";
	return 0;
}
