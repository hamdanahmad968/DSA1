
#include<iostream>
using namespace std;

int firstoccurence(int arr[] , int n , int key){
    int start= 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1; //it is to check whether the key is also present in the left  side of the array because it has to check the first occurence
        }

        else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid +1;
            }
              mid = start + (end - start)/2;

    }
    return ans;
}

int lastoccurence(int arr[] , int n , int key){
    int start= 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }

        else if(arr[mid]>key){  //left me jao
            end = mid-1;
        }
        else if(arr[mid]<key){  //right me jao
            start = mid +1;
            }
              mid = start + (end - start)/2;

    }
    return ans;
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int key;
    cout<<"Enter the key to find the occurences: ";
    cin>>key;

    int arr[n];
    cout<<"Enter the element of the array: ";
    for (int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

   int first =  firstoccurence(arr , n , key);
   cout<<"the first occurence of the key is at index: "<<first<<" "; 

    int last = lastoccurence(arr , n , key);
    cout<<"the last occurence of the key is at index: "<<last<<" "; 
    return 0;
}