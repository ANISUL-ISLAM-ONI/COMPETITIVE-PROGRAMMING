#include<bits/stdc++.h>

using namespace std;

long long rev(long long x){
	long long r = 0;
	while(x){
		r *= 10;
		r += (x % 10);
		x /= 10;
	}
	return r;
}

int main(){
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		long long a, count = 0;
		cin >> a;
		while(a != rev(a)){
			a += rev(a);
			count++;
		}
		cout << count << " " << a << "\n";
	}
	return 0;
}
