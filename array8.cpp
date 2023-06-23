#include<iostream>
using namespace std;

// sort 0 ,1 



void sortarray(int arr[] , int n ){

    //  i=left and j=right 
    int i =0;
    int j = n-1;

    while(i<=j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j] == 1){
            j--;
        }
         else if (arr[i] == 1 && arr[j] == 0) {
            swap(arr[i], arr[j]);
            i++;
            j--;
            }
        
    }
}

int main(){

int arr[8] = {1,0,1,1,0,0,1,0};
// int n = 8;
sortarray(arr , 8);



for(int i =0 ;i<8 ; i++){
    cout<<arr[i]<<" ";
    }
    
return 0;
}