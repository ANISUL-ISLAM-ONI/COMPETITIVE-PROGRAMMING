#include<bits/stdc++.h>

using namespace std;

long long func(long long n){
	if(n == 0) return 1;
	else return n + func(n-1);
}

int main(){
	long long n;
	while(cin >> n){
		if(n < 0) break;
		long long val = func(n);
		cout << val << "\n";
	}
	return 0;
}
