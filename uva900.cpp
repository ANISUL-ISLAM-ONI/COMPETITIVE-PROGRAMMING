#include<bits/stdc++.h>

using namespace std;

int main(){
	long long arr[51];
	arr[1] = 1;
	arr[2] = 2;
	for(int i = 3; i <= 50; i++) arr[i] = (arr[i - 1] + arr[i - 2]);
	long long n;
	while(cin >> n){
		if(n == 0) break;
		cout << arr[n] << "\n";
	}
	return 0;
}
