#include<bits/stdc++.h>

using namespace std;

int main(){
	int C;
	cin >> C;
	for(int i = 0; i < C; i++){
		int N;
		cin >> N;
		int arr[N], sum = 0, count = 0;
		for(int j = 0; j < N; j++){
			cin >> arr[j];
			sum += arr[j];
		}
		sum /= N;
		for(int j = 0; j < N; j++){
			if(arr[j] > sum) count++;
		}
		double avg = ((double)count/(double)N) * 100.0;
		printf("%.3lf",avg);
		cout << "%" << "\n";
	}
}
