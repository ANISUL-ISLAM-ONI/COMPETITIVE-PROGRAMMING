#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	if(n % 2 == 1) cout << "-1\n";
	else{
		for(int i = n; i > 1; i--){
			cout << i << " ";
		}
		cout << "1\n";
	}
	return 0;
}
