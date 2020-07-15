#include<bits/stdc++.h>

using namespace std;

int main(){
	long long a, l, index = 1;
	while(cin >> a >> l){
		if(a < 0 && l < 0) break;
		long long an = a;
		int count = 0;
		while(a <= l){
			if(a == 1){
				count++;
				break;
			}
			else if(a % 2 == 0){
				count++;
				a /= 2;
			}
			else{
				count++;
				a = (3 * a) + 1;
			}
		}
		cout << "Case " << index << ": A = " << an << ", limit = " << l << ", number of terms = " << count << "\n";
		index++;
	}
	return 0;
}
