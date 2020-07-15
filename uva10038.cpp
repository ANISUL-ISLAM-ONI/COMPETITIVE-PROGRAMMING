#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		int arr[n];
		for(int i = 0; i < n; i++)	cin >> arr[i];
		bool done = true;
		for(int i = 0; i < n-1; i++){
			bool x = false;
			int dump = abs(arr[i] - arr[i+1]);
			for(int j = 0; j < n; j++){
				if(arr[j] == dump)	x = true;
			}
			if(x == false){
				cout << "Not jolly\n";
				done = false;
				break;
			}
		}
		if(done)  cout << "Jolly\n";
	}
	return 0;
}
