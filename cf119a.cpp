#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	if(a == 0) return b;
	else return gcd(b % a, a);
}

int main(){
	int a, b, n;
	cin >> a >> b >> n;
	bool sim = true;
	while(true){
		if(sim){
			int stone = gcd(a, n);
			if(stone <= n){
				n -= stone;
				sim = false;
			}
			else{
				cout << "1\n";
				break;
			}
		}
		else{
			int stone = gcd(b, n);
			if(stone <= n){
				n -= stone;
				sim = true;
			}
			else{
				cout << "0\n";
				break;
			}
		}
	}
	return 0;
}
