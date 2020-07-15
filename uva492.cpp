#include<bits/stdc++.h>

using namespace std;

bool vo[128];

int main(){
    vo['A'] = vo['a'] = vo['E'] = vo['e'] = vo['I'] = vo['i'] = vo['O'] = vo['o'] = vo['U'] = vo['u'] = true;
    string str;
    while(getline(cin, str)){
        for(int i = 0; i < str.length(); ++i){
            if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
                char start = str[i];
                if (vo[start]) cout << start;
                ++i;
                for (; i < str.length() && (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'); ++i) cout << str[i];
                if (!vo[start]) cout << start;
                cout << "ay";
                --i;
            }
            else cout << str[i];
        }
        cout << '\n';
    }
}

