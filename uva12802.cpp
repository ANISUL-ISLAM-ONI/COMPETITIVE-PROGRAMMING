#include<bits/stdc++.h>

using namespace std;

bool prime[1000005];

void func(){
	for(int i = 0; i < 1000002; i++) prime[i] = true;
	for(int p = 2; p * p <= 1000002; p++){
		if(prime[p] == true){
        	for(int i = p * p; i <= 1000002; i += p){
            	prime[i] = false;
        	}
    	}
	}
}

int main(){
	func();
	long long n;
	while(cin >> n){
		cout << n+n << "\n";
		if(prime[n]){
			long long sump = 0, dump = n;
			while(dump){
				long long temp = (dump % 10);
				sump = sump * 10 + temp;
				dump /= 10;
			}
			if(n == sump) break;
		}
	}
	return 0;
}
