#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		int vec[n];
		for(int i = 0; i < n; i++) cin >> vec[i];
		int nc2 = (n * (n - 1)) / 2;
		int count = 0;
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				if(__gcd(vec[j], vec[i]) == 1) count++;
			}
		}
		if(count == 0) cout << "No estimate for this data set.\n";
		else{
			long double pi = (long double)(6 * nc2) / (long double)count;
			pi = sqrt(pi);
			printf("%.6Lf\n", pi);
		}
	}
	return 0;
}
