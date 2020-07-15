#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int arr[n];
		int sum = 0;
		for(int i = 0; i < n; i++){
			string str;
			cin >> str;
			if(str == "SAME"){
				string str2;
				cin >> str2;
				int in;
				cin >> in;
				sum += arr[in - 1];
				arr[i] = arr[in - 1];
			}
			else if(str == "LEFT"){
				arr[i] = -1;
				sum += arr[i];
			}
			else if(str == "RIGHT"){
				arr[i] = 1;
				sum += arr[i];
			}
		}
		cout << sum << "\n";
	}
	return 0;
}
