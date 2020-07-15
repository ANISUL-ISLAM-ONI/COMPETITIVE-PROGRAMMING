#include<bits/stdc++.h>

using namespace std;

string ternary(int n){
	string str;
	while(n){
		int rem = n % 3;
		str += to_string(rem);
		n /= 3;
	}
	reverse(str.begin(), str.end());
	return str;
}

int main(){
	int n;
	while(cin >> n){
		if(n < 0) break;
		if(n == 0) cout << "0\n";
		else cout << ternary(n) << "\n";
	}
	return 0;
}
