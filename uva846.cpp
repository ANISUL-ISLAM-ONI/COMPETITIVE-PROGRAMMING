#include<bits/stdc++.h>

using namespace std;

int main(){
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int T;
	cin >> T;
	while(T--){
		int x, y;
		cin >> x >> y;
		int total_step = (y - x);
		int count = 0, i = 1;
		if(total_step == 0) cout << count << "\n";
		else{
			while(1){
				if(total_step <= i){
					count++;
					break;
				}
				else{
					if(total_step - (2 * i) <= 0){
						count += 2;
						break;
					}
					else{
						total_step -= (2 * i);
						count += 2;
					}
				}
				i++;
			}
			cout << count << "\n";
		}
	}
	return 0;
}
