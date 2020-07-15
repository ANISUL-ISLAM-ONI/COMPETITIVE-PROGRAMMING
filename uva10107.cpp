#include<bits/stdc++.h>

using namespace std;

int main(){
	int arr[10000];
	int i = 0;
	while(cin >> arr[i]){
		sort(arr,arr+i+1);
		if(i % 2 == 0){
			cout << arr[i / 2] << "\n";
		}
		else{
			cout << (arr[i / 2] + arr[(i / 2) + 1]) / 2 << "\n";
		}
		i++;
	}
	return 0;
}
