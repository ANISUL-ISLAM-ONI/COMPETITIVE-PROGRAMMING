#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, chest = 0, bicep = 0, back = 0, i = 0;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		if(i == 0){
			chest += a;
			i++;
		}
		else if(i == 1){
			bicep += a;
			i++;
		}
		else{
			back += a;
			i = 0;
		}
	}
	int ma = max(chest, bicep);
	ma = max(ma, back);
	if(ma == chest) cout << "chest\n";
	else if(ma == bicep) cout << "biceps\n";
	else cout << "back\n";
	return 0;
}
