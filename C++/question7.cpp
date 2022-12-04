#include<iostream>
using namespace std;

// count the number of 1's and 0's in a given string.

int main()
{
   string s = "1100011101";
   int countOnes = 0;
   int countZeroes = 0;
   for(int i=0;i<s.length();i++){
      if(s[i]=='1'){
         countOnes++; 
      }
      else if(s[i]=='0'){
         countZeroes++;
      }
   }

   cout << "ones " << countOnes;
   cout << "\nzeroes " << countZeroes;
      
   return 0;
}

