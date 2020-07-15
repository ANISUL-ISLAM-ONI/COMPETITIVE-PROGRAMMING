#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(1){
		int arr[n];
		string str[n];
		for(int i = 0; i < n; i++){
			cin >> str[i];
			arr[i] = 0;
		}
		for(int i = 0; i < n; i++){
			string dump;
			cin >> dump;
			int amount, nopr;
            cin >> amount >> nopr;
			int avg;
			if(nopr == 0) continue;
            avg = amount / nopr;
			for(int j = 0; j < n; j++){
				if(dump == str[j]){
					arr[j] += ((amount % nopr) - amount);
					break;
				}
			}
			for(int j = 0; j < nopr; j++){
				string sump;
				cin >> sump;
				for(int k = 0; k < n; k++){
					if(sump == str[k]){
						arr[k] += avg;
						break;
					}
				}
			}
		}
		for(int i = 0; i < n; i++){
			cout << str[i] << " " << arr[i] << "\n";
		}
		if(cin>>n) cout << "\n";
        else break;
	}
	return 0;
}
