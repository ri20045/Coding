#include<bits/stdc++.h>
using namespace std;

void display()
{
    int n,x;
    int ans = INT_MIN;
    cout << "Number of values: "; cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> x;
        if(x > ans) ans = x;
    }

    cout << ans << "\n";
}
int main()
{
    display();
    return 0;
}
