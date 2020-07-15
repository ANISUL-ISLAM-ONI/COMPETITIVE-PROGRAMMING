#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, co = 0, tr = 0;
	cin >> n;
	getchar();
	for(int i = 0; i < n; i++){
		char a;
		cin >> a;
		if(a == 'x'){
			if(tr == 2){
				co++;
			}
			else{
				tr++;
			}
		}
		else{
			tr = 0;
		}
	}
	cout << co << "\n";
	return 0;
}
