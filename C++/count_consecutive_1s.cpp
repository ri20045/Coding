#include<iostream>
using namespace std;

// count the maximum number of consecutive 1's.

int main()
{
   string s = "1100011100011111";
   int count = 0;
   int max = 0;
   for(int i=0; i<s.length(); i++){
      if(s[i] == '1'){
         count++;
      }
      else if(count > max){
         max = count;
      }
      else if(s[i] == '0'){
         count = 0;
      }   
      
   }
   max = count;
   cout << "max " << max;
   
   return 0;
}

