#include<bits/stdc++.h>

using namespace std;

int main(){
	long double r, n;
	while(cin >> r >> n){
		n = n*r*r*sin(2*acos(-1)/n)/2;
		printf("%.3Lf\n", n);
	}
	return 0;
}
