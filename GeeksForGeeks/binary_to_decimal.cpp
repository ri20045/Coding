#include<bits./stdc++.h>
using namespace std;

int convertBinaryStringToInt(string s) {

    reverse(s.begin(), s.end());

    int accSum = 0;
    int power = 0;
    for(auto it : s)
    {
        accSum += ((it - '0') * (pow(2,power)));
        power++;
    }

    return accSum;
}

int main() {
    string binaryInputString;
    cin >> binaryInputString;

    int ans = convertBinaryStringToInt(binaryInputString);

    cout << ans << "\n";

    return 0;
}
