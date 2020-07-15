#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 1; i <= T; i++){
		int a, b, sum = 0;
		cin >> a >> b;
		if(a % 2 == 1)
			for(int j = a; j <= b; j += 2)  sum += j;
		else
			for(int j = a + 1; j <= b; j += 2)  sum += j;
		cout << "Case " << i << ": " << sum << "\n";
	}
	return 0;
}
