#include<bits/stdc++.h>
using namespace std;

void display(){
   vector<int> res;
   int n;
   cout << "Enter n: "; cin >> n;
   while(n > 0){
    int lastdigit = n%10;
    n = n/10;
    res.push_back(lastdigit);
   }

   reverse(res.begin(), res.end());

   for(auto it: res) {
    cout << it << "\n";
   }
}
int main(){
    display();
    return 0;
}
