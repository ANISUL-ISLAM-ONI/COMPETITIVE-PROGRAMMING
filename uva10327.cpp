#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;
	while(cin >> N){
		int arr[N];
		for(int i = 0; i < N; i++) cin >> arr[i];
		int count = 0;
    	for(int i = 0; i < N; i++){
        	int key = arr[i];
        	int j = i - 1;
        	while(j >= 0 && arr[j] > key){
            	arr[j + 1] = arr[j];
            	j = j - 1;
				count++;
        	}
        	arr[j + 1] = key;
   		}
		cout << "Minimum exchange operations : " << count << "\n";
	}
	return 0;
}
