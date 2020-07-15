#include<bits/stdc++.h>

using namespace std;

int main(){
	long long a, b;
	while(cin >> a >> b){
		if(a == 0 && b == 0)  break;
		int count = 0, flag = 0;
		while(a || b){
			flag = ((a % 10) + (b % 10) + flag) / 10;
			a /= 10;
			b /= 10;
			count += flag;
		}
		if(count == 0) cout << "No carry operation.\n";
		else if(count == 1) cout << count << " carry operation.\n";
		else cout << count << " carry operations.\n";
	}
	return 0;
}
