#include<bits/stdc++.h>
using namespace std;
//sum of all counts(number of 1s in binary form of integer).
int CountNumberOf1s(int n)
{
    cout << n << '(';
    vector<int> v;
    int count = 0;
    while(n >= 1)
    {
        if(n % 2 == 0) v.push_back(0);
        if(n % 2 != 0)
        {
            v.push_back(1);
            count++;
        }
        n = n/2;
    }

    reverse(v.begin(), v.end());
    for(auto it: v) {
        cout << it;
    }
    cout << ") -> " << count << "\n";
    return count;
}
void display()
{
    int AccSum = 0;
    int x;
    cin >> x;
    for(int i = 1; i <= x; i++)
    {
    AccSum += CountNumberOf1s(i);
    }
    cout << "Result: " << AccSum;
}
int main(){
    display();
    return 0;
}
