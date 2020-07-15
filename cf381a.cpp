#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, se = 0, es = 0;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int fi = 0, la = n - 1;
	bool ch = true;
	while(fi != la){
		if(arr[fi] > arr[la]){
			if(ch){
				se += arr[fi];
				ch = false;
			}
			else{
				es += arr[fi];
				ch = true;
			}
			fi++;
		}
		else if(arr[la] > arr[fi]){
			if(ch){
                se += arr[la];
                ch = false;
            }
            else{
                es += arr[la];
                ch = true;
            }
            la--;
		}
	}
	if(ch) se += arr[fi];
	else es += arr[fi];
	cout << se << " " << es << "\n";
	return 0;
}
