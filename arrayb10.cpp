#include<iostream>
using namespace std;


// peak element in the mountain array 
int mountarray(int arr[] , int n ){
    int s = 0;
    int e = n - 1 ;
    int mid = s + (e-s)/2;  

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid +1;
        }
        else{
            e = mid;
        }
             mid = s + (e-s)/2;  


    }
    return arr[s];  // if we return s instead of arr[s] it return the index of the peak element and arr[s] return the element at the peak index
}

int main(){
    int arr[12] = {1,2,4,6,7,9,10 , 5, 4, 3,2,1};

    int max = mountarray(arr , 10 );
    cout<<"The max element in the mountain array is: "<<max<<" ";
    return 0;
}