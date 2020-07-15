#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, co = 0;
	cin >> n;
	while(n--){
		int la, ca;
		cin >> la >> ca;
		ca -= la;
		if(ca > 1) co++;
	}
	cout << co << "\n";
	return 0;
}
