#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 0; i < T; i++){
		int n,max = 0, min = INT_MAX;
		cin >> n;
		for(int j = 0; j < n; j++){
			int a;
			cin >> a;
			if(a > max) max = a;
			if(a < min) min = a;
		}
		cout << 2 * (max - min) << "\n";
	}
	return 0;
}
