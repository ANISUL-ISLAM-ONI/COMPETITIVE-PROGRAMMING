#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, s = 1, j = 2;
	cin >> n;
	getchar();
	for(int i = 1; i <= n; i++){
		char a;
		cin >> a;
		if(i == s){
			cout << a;
			s += j;
			j++;
		}
	}
	cout << "\n";
	return 0;
}
