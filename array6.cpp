#include<iostream>
#include <algorithm>
using namespace std;



void pairsum(int arr[] , int size, int s){
    bool found = false;
    for(int i =0 ; i<size ; i++){
        for (int j = i+1 ; j<size ; j++ ){
            if(arr[i] + arr[j]==s){
                found = true;

                // sort the array by swapping
               if (arr[i]>arr[j]){
                swap(arr[i], arr[j]);
               }

                cout<<arr[i] <<" "<< arr[j] <<endl;
            }
        }
    }
    if(!found){
        cout<<"no pair found with the given sum";
    }
}

int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;


  int arr[n];
    cout<<"enter the element of array: ";
    for (int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    
    int s;
    cout<<"enter the num to find the sum from the array: ";
    cin>>s;

  

    pairsum(arr , n , s);
    return 0;
}