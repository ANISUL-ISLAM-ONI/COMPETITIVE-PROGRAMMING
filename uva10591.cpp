#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ll T;
	while(cin >> T){
		for(ll i = 1; i <= T; i++){
			ll n;
			cin >> n;
			ll a = n;
            ll sum = 0;
            while(n<9 || n>9){
            	if(n<=9){
                	sum=n;
                    break;
                }
                while(n!=0){
                	ll b = n % 10;
                    sum = sum + (b * b);
                    n = n / 10;
                }
                n = sum;
                sum = 0;
			}
			if(sum == 1 || sum == 7) cout << "Case #" << i << ": " << a << " is a Happy number.\n";
			else cout << "Case #" << i << ": " << a << " is an Unhappy number.\n";
		}
	}
	return 0;
}
