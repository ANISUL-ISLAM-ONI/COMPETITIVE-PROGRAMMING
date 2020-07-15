#include<bits/stdc++.h>

using namespace std;

int main(){
	int N, index = 1;
	while(cin >> N){
		if(N == 0) break;
		int party = 0, no = 0;
		for(int i = 0; i < N; i++){
			int a;
			cin >> a;
			if(a == 0) party++;
			else no++;
		}
		cout << "Case " << index << ": " << no - party << "\n";
		index++;
	}
	return 0;
}
