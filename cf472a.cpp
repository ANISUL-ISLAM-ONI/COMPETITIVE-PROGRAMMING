#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        cout << "4 " << n - 4 << "\n";
    }
    else{
        cout << min(n - 9, 9) << " " << max(n - 9, 9) << "\n";
    }
}