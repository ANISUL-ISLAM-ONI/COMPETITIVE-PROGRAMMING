#include<bits/stdc++.h>

using namespace std;

long long f(long long a){
	long long sum = 0;
	while(a){
		sum += a%10;
		a /= 10;
	}
	return sum;
}

long long g(long long b){
	while(1){
		b = f(b);
		if(b/10 == 0){
			return b;
		}
	}
}

int main(){
	long long n;
	while(cin >> n){
		if(n == 0)  break;
		cout << g(n) << "\n";
	}
	return 0;
}
