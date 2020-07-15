#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		bitset<32> a(n);
		int index = 0, count = 0;
		for(int i = 31; i >= 0; i--){
			if(a[i] == 1){
				index = i;
				break;
			}
		}
		cout << "The parity of ";
		for(int i = index; i >= 0; i--){
			if(a[i] == 1) count++;
			cout << a[i];
		}
		cout << " is " << count << " (mod 2).\n";
	}
	return 0;
}
