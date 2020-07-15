#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	int ma = max(a, b);
	ma = 6 - ma + 1;
	if(ma == 4) cout << "2/3\n";
	else{
		if(6 % ma == 0){
			cout << "1/" << 6/ma << "\n";
		}
		else{
			cout << ma << "/6\n";
		}
	}
	return 0;
}
