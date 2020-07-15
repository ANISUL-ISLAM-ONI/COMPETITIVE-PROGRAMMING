#include<bits/stdc++.h>

using namespace std;

long long mod(long long a, long long b, long long c){
	if(b == 0) return 1;
	if(b%2==0){
        long long x = mod(a, b/2, c);
        return (x * x) % c;
    }
	else return (a % c * mod(a, b-1, c)) % c;
}

int main(){
	long long B,P,M;
	while(cin >> B >> P >> M){
		cout << mod(B, P, M) << "\n";
	}
	return 0;
}
