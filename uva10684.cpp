#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		int a, dum = 0, maxx = 0;
		for(int i = 0; i < n; i++){
			cin >> a;
			dum += a;
			if(dum > maxx) maxx = dum;
			if(dum < 0) dum = 0;
		}
		if(maxx > 0) cout << "The maximum winning streak is " << maxx << ".\n";
		else cout << "Losing streak.\n";
	}
	return 0;
}
