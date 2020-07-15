#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		int count = 0;
		while(n != 1){
			count += (n / 3);
			n = (n / 3) + (n % 3);
			if(n == 2) n++;
		}
		cout << count << "\n";
	}
	return 0;
}
