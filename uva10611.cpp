#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> arr;
	vector<int>::iterator itr;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		itr = find(arr.begin(), arr.end(), a);
		if(itr == arr.end()) arr.push_back(a);
	}
	int q;
	n = arr.size();
	cin >> q;
	for(int i = 0; i < q; i++){
		int hi, flag = 0;
		cin >> hi;
		for(int j = 0; j < n; j++){
			if(arr[j] == hi){
				if(j != n - 1 && j != 0){
					cout << arr[j - 1] << " " << arr[j + 1] << "\n";
					flag = 1;
					break;
				}
				else if(j == 0){
					cout << "X " << arr[j + 1] << "\n";
					flag = 1;
                	break;
				}
				else if(j == n - 1){
					cout << arr[j - 1] << " X\n";
					flag = 1;
                	break;
				}
			}
			else if(arr[j] > hi){
				if(j != n - 1 && j != 0){
					cout << arr[j - 1] << " " << arr[j] << "\n";
					flag = 1;
					break;
				}
				else if(j == 0){
					cout << "X " << arr[j] << "\n";
					flag = 1;
					break;
				}
				else if(j == n - 1){
					cout << arr[j - 1] << " " << arr[j] << "\n";
					flag = 1;
					break;
				}
			}
		}
		if(flag == 0) cout << arr[n - 1] << " " << "X\n";
	}
	return 0;
}
