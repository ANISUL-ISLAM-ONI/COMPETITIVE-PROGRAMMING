#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, co = 0;
	cin >> n;
	int len = n / 2;
	for(int i = 1; i <= len; i++){
		if((n - i) % i == 0) co++;
	}
	cout << co << "\n";
}
