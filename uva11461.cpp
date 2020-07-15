#include<bits/stdc++.h>

using namespace std;

bool isPerSqr(int n){
	long double x = (long double) n;
	long double temp = sqrt(x);
  	return ((temp - floor(temp)) == 0);
}

int main(){
	int a, b;
	while(cin >> a >> b){
		if(a == 0 && b == 0) break;
		int count = 0;
		for(int i = a; i <= b; i++){
			if(isPerSqr(i)) count++;
		}
		cout << count << "\n";
	}
	return 0;
}
