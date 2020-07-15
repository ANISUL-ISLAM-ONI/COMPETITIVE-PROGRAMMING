#include <bits/stdc++.h>

using namespace std;

int compute(int n){
	if(n == 1) return 1;
	else return compute(n - 1) + (4 * (n - 1));
}

int main(){
	int n;
	cin >> n;
	cout << compute(n) << "\n";
	return 0;
}
