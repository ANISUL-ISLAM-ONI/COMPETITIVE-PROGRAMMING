#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m, index = 0;
	while(cin >> n >> m){
		getchar();
		if(n == 0 && m == 0) break;
		int arr[n][m];
		if(index) cout << "\n";
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				char x;
				cin >> x;
				if(x == '*') arr[i][j] = -1;
				else if(x == '.') arr[i][j] = 0;
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(arr[i][j] == -1){
					if(i > 0 && j > 0 && arr[i-1][j-1] != -1) arr[i-1][j-1]++;
					if(i > 0 && arr[i-1][j] != -1) arr[i-1][j]++;
					if(i > 0 && j < m-1 && arr[i-1][j+1] != -1) arr[i-1][j+1]++;
					if(j > 0 && arr[i][j-1] != -1) arr[i][j-1]++;
                	if(j < m-1 && arr[i][j+1] != -1) arr[i][j+1]++;
					if(i < n-1 && j > 0 && arr[i+1][j-1] != -1) arr[i+1][j-1]++;
                	if(i < n-1 && arr[i+1][j] != -1) arr[i+1][j]++;
                	if(i < n-1 && j < m-1 && arr[i+1][j+1] != -1) arr[i+1][j+1]++;
				}
			}
		}
		index++;
		cout << "Field #" << index << ":\n";
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(arr[i][j] == -1) cout << "*";
				else cout << arr[i][j];
			}
			cout << "\n";
		}
	}
	return 0;
}
