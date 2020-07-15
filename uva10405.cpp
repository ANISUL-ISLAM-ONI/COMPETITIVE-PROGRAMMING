#include<bits/stdc++.h>

using namespace std;

int sub[2000][2000];

int main(){
    string a,b;
    while(getline(cin,a)){
        getline(cin,b);
        int lena = a.size();
        int lenb = b.size();
        for(int i = 1; i <= lena; i++){
            for(int j = 1; j <= lenb; j++){
                if(a[i-1] == b[j-1])  sub[i][j] = sub[i-1][j-1] + 1;
                else  sub[i][j] = max(sub[i-1][j], sub[i][j-1]);
            }
		}
        cout<< sub[lena][lenb] << "\n";
    }
return 0;
}
