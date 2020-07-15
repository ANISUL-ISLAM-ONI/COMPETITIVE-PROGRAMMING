#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        bitset<32> a(m);
        int count = 0;
        for(int j = 0; j < 32; j++){
            if(a[j] == 1) count++;
        }
        cout << count << " ";
        int sum = 0, k = 0;
        while(m){
            sum += (m % 10) * pow(16,k);
            k++;
            m /= 10;
        }
        bitset<32> b(sum);
        count = 0;
        for(int l = 0; l < 32; l++){
            if(b[l] == 1) count++;
        }
        cout << count << "\n";
    }
    return 0;
}
