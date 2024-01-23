#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
    int t;
        for(int i = 0; i < n/2; i++){
            t = arr[i];
            arr[i]=arr[n-1-i];
            arr[n-1-i] = t;
        }
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    reverseArray(arr,n);
    cout<<endl;
     for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}