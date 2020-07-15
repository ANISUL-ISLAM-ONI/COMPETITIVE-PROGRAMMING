#include <bits/stdc++.h>

using namespace std;

int main(){
    int red, blue, result1, result2;
    cin >> red >> blue;
    int maximum = max(red, blue);
    int minimum = min(red, blue);
    result1 = minimum;
    maximum -= minimum;
    result2 = (maximum / 2);
    cout << result1 << " " << result2 << "\n";
    return 0;
}