#include<iostream>
using namespace std;

// integer to binary conversion.

int main()
{
   int n;
   cin >> n;
   string ans = "";
   while(n>1){
      int rem = n % 2;
      ans += rem + '0';
      n = n/2;
   }
   reverse(ans.begin(), ans.end());
   cout << "1" + ans;
   return 0;
}

