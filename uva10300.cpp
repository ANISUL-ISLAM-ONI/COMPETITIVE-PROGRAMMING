#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int f, sum = 0;
		cin >> f;
		for(int j = 0; j < f; j++){
			int a, b, c;
			cin >> a >> b >> c;
			sum += (a * c);
		}
		cout << sum << "\n";
	}
	return 0;
}
