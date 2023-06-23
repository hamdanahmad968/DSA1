#include <iostream>
using namespace std;


// linear search

bool linearsearch(int arr[] , int size , int key){
    for(int i =0 ; i<size  ; i++ ){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int size;
    cout<<"enter the size: ";
    cin>>size;

    int arr[size];
    cout<<"enter the element of array : ";
    for(int i =0 ; i<size ; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter the key to search: ";
    cin>>key;

    bool found = linearsearch(arr , size , key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present";
    }
}