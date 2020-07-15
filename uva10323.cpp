#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		if((n>=0 && n<=7) || (n<0 && n%2==0)) cout << "Underflow!\n";
		else if(n >= 8 && n <= 13){
			long long fac = 5040;
			for(int i = 8; i <= n; i++) fac *= i;
			cout << fac << "\n";
		}
		else cout << "Overflow!\n";
	}
	return 0;
}
