#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    while(cin >> a >> b){
        int lena = a.length();
        int lenb = b.length();
        int len = lena + lenb;
        int cr[lena], dr[lenb];
        int er[len + 2] = {0};
        for(int i = lena-1; i >= 0; i--)  cr[lena-1-i] = a[i]-'0';
        for(int i = lenb-1; i >= 0; i--)  dr[lenb-1-i] = b[i]-'0';
        for(int i = 0; i < lena; i++){
            for(int j = 0; j < lenb; j++){
                er[i+j] += cr[i] * dr[j];
                er[i+j+1] += er[i+j] / 10;
                er[i+j] %= 10;
            }
        }
        while(er[len] == 0 && len > 0)  len--;
        for(int i = len; i >= 0; i--)  cout << er[i];
        cout << "\n";
    }
    return 0;
}
