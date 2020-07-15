#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, index = 1;
	while(cin >> n){
		if(n < 0) break;
		if(n == 1 || n == 0){
			cout << "Case " << index << ": 0" << "\n";
		}
		else{
			int sum = 1, count = 0;
			while(1){
				sum += sum;
				count++;
				int x = sum + sum;
            	if(x > n) break;
			}
			if(sum == n) cout << "Case " << index << ": " << count << "\n";
			else cout << "Case " << index << ": " << count + 1 << "\n";
		}
		index++;
	}
	return 0;
}
