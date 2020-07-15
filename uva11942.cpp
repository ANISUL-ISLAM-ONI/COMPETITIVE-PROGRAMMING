#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin >> N;
	cout << "Lumberjacks:\n";
	for(int i = 0; i < N; i++){
		int arr[10], flag1 = 0, flag2 = 0;
		for(int j = 0; j < 10; j++)  cin >> arr[j];
		for(int j = 0; j < 9; j++){
			if(arr[j] > arr[j+1]) flag1++;
			else flag2++;
		}
		if(flag1 == 9 || flag2 == 9) cout << "Ordered\n";
		else cout << "Unordered\n";
	}
	return 0;
}
