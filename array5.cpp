#include<iostream>
using namespace std;

// array intersection
void intersection(int arr1[] , int n ,int  arr2[] , int m ){
    int i = 0;
    int j = 0;

    while(i<n && j<m){
        // sorting of array 
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else{
            j++;
        }
    }

    
}


int main(){
    
    // int arr1[6] = {2 , 4 , 5 ,6, 7 ,9};
    // int arr2[4] = {3 , 5 , 6 ,8};

    //  int n = sizeof(arr1) / sizeof(arr1[0]);
    // int m = sizeof(arr2) / sizeof(arr2[0]);

    // intersection(arr1 , n , arr2 , m);
    // return 0;


    int n;
    cout<<"type the size of arr 1: ";
    cin>>n;

     int arr1[n];
     cout<<"enter element of arr1: ";
    for(int i =0 ; i<n ;i++){
        cin>>arr1[i];
    }

    
     
    int m;
    cout<<"type the size of arr 2: ";
    cin>>m;

    int arr2[m];
     cout<<"enter element of arr2: ";
    for(int i =0 ; i<m ;i++){
        cin>>arr2[i];
    }

    intersection(arr1 , n , arr2 , m);
    return 0;


}