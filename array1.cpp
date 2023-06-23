#include <iostream>
using namespace std;



// ""
// print array
// void printarray(int arr[] , int size){
//     for(int i = 0 ; i<size ; i++){
//     cout<< arr[i]<<" ";
//     }

// }

// swap alternate array
void swapalternate(int arr[] , int size){
    for(int i = 0 ; i<size ; i+=2){
        if(i+1 < size){
            swap(arr[i] , arr[i+1]);
        }
    }
}



int main(){

int size;
cout<<"enter size of array: ";
cin>>size;

int arr[size];
cout<<"enter element of array: ";
for(int i = 0 ; i<size ; i++){
    cin>>arr[i];
}

swapalternate(arr , size);
// printarray(arr , size);
 for(int i = 0 ; i<size ; i++){
    cout<< arr[i]<<" ";
    }

  
  return 0;
//


}

