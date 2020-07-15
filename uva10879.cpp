#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 1; i <= T; i++){
		int n;
		cin >> n;
		cout << "Case #" << i << ": " << n;
		int count = 0;
		int s = sqrt(n);
		for(int j = 2; j <= s; j++){
			if(n % j == 0 && n / j != j){
				cout << " = " << j << " * " << n / j;
				count++;
			}
			if(count == 2) break;
		}
		cout << "\n";
	}
	return 0;
}
