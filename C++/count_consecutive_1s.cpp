#include<iostream>
using namespace std;

// count the maximum number of consecutive 1's.

int main()
{
   string s;
   cin >> s;
   int count = 0;
   int max = 0;
   for(int i=0; i<s.length(); i++){
      if(s[i] == '1'){
         count++;
      }
      
      else if(s[i] == '0'){
         if(count > max){
          max = count;

      }
       count = 0;
      }   
      
   }
   if(count > max){
          max = count;

      }
   cout << "max " << max;
   
   return 0;
}

