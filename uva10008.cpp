#include<bits/stdc++.h>

using namespace std;

typedef struct perl{
    char a;
    int n;
}oni;

bool compary(oni an, oni b){
    if(an.n == b.n) return an.a < b.a;
    else return an.n > b.n;
}

int main(){
    oni arr[26];
    int in = 65;
    for(int i = 0; i < 26; i++){
        arr[i].n = 0;
        arr[i].a = in;
        in++;
    }
    int T;
    cin >> T;
    string str[T+1];
    for(int i = 0; i < T+1; i++){
        getline(cin,str[i]);
        int len = str[i].length();
        for(int j = 0; j < len; j++){
            if(str[i][j] == 'A' || str[i][j] == 'a') arr[0].n += 1;
            if(str[i][j] == 'B' || str[i][j] == 'b') arr[1].n += 1;
            if(str[i][j] == 'C' || str[i][j] == 'c') arr[2].n += 1;
            if(str[i][j] == 'D' || str[i][j] == 'd') arr[3].n += 1;
            if(str[i][j] == 'E' || str[i][j] == 'e') arr[4].n += 1;
            if(str[i][j] == 'F' || str[i][j] == 'f') arr[5].n += 1;
            if(str[i][j] == 'G' || str[i][j] == 'g') arr[6].n += 1;
            if(str[i][j] == 'H' || str[i][j] == 'h') arr[7].n += 1;
            if(str[i][j] == 'I' || str[i][j] == 'i') arr[8].n += 1;
            if(str[i][j] == 'J' || str[i][j] == 'j') arr[9].n += 1;
            if(str[i][j] == 'K' || str[i][j] == 'k') arr[10].n += 1;
            if(str[i][j] == 'L' || str[i][j] == 'l') arr[11].n += 1;
            if(str[i][j] == 'M' || str[i][j] == 'm') arr[12].n += 1;
            if(str[i][j] == 'N' || str[i][j] == 'n') arr[13].n += 1;
            if(str[i][j] == 'O' || str[i][j] == 'o') arr[14].n += 1;
            if(str[i][j] == 'P' || str[i][j] == 'p') arr[15].n += 1;
            if(str[i][j] == 'Q' || str[i][j] == 'q') arr[16].n += 1;
            if(str[i][j] == 'R' || str[i][j] == 'r') arr[17].n += 1;
            if(str[i][j] == 'S' || str[i][j] == 's') arr[18].n += 1;
            if(str[i][j] == 'T' || str[i][j] == 't') arr[19].n += 1;
            if(str[i][j] == 'U' || str[i][j] == 'u') arr[20].n += 1;
            if(str[i][j] == 'V' || str[i][j] == 'v') arr[21].n += 1;
            if(str[i][j] == 'W' || str[i][j] == 'w') arr[22].n += 1;
            if(str[i][j] == 'X' || str[i][j] == 'x') arr[23].n += 1;
            if(str[i][j] == 'Y' || str[i][j] == 'y') arr[24].n += 1;
            if(str[i][j] == 'Z' || str[i][j] == 'z') arr[25].n += 1;
        }
    }
    sort(arr,arr+26,compary);
    int i = 0;
    while(arr[i].n > 0){
        cout << arr[i].a << " " << arr[i].n << "\n";
        i++;
    }
    return 0;
}
