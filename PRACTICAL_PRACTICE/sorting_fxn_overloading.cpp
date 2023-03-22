#include<iostream>
using namespace std;
// Write a C++ program (using function overloaded) to sort 5 integer values, or 5 long values, or 5double values.

void sortArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void sortArray(long arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                long temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void sortArray(double arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
   int intarr[] = {5,4,2,1,3};
   long longarr[] = {10000,20000,40000,50000,30000};
   double doublearr[] = {0.9,4.5,5.5,3.5,2.5};

   sortArray(intarr,5);
   sortArray(longarr,5);
   sortArray(doublearr,5);

   cout << "Sorted integer array: " << endl;
   for(int i=0;i<5;i++){
    cout << intarr[i] << " ";
   }

   cout << "\n\nSorted long array: " << endl;
   for(int i=0;i<5;i++){
    cout << longarr[i] << " ";
   }

   cout << "\n\nSorted double array: " << endl;
   for(int i=0;i<5;i++){
    cout << doublearr[i] << " ";
   }
    return 0;
}
