#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ll N = 10000,ways[N];
    ll coin[5] = {50, 25, 10, 5, 1};
    ways[0] = 1;
    for(int i = 0; i < 5; i++){
        for(int j = coin[i]; j < N; j++) ways[j] += ways[j - coin[i]];
    }
	ll n;
	while(cin >> n){
		cout << ways[n] << "\n";
	}
	return 0;
}
