#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		int sum = 0;
		for(int i = 1; i <= n; i++){
			sum += pow(i,2);
		}
		cout << sum << "\n";
	}
	return 0;
}
