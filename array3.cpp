#include <iostream>
using namespace std;


// reverse the array
void reverse(int arr[] , int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int size;
    cout<<"enter the size of array: ";
    cin>>size;


 int arr[size];
 cout<<"enter the element of array: ";
 for (int i=0 ; i<size ; i++){
    cin>>arr[i];
 }

 reverse(arr,size);

 for(int i =0 ; i<size ; i++){
    cout<<arr[i]<<" ";
 }
 return 0;

}