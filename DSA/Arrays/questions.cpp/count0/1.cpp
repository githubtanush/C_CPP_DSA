#include<iostream>
using namespace std;
void inputArr(int arr[],int n){
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
}
void outputArr(int arr[],int n){
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void countZeroOne(int arr[],int n){
    int ZeroCount = 0;
    int OneCount = 0;
    for(int i = 0; i<n ; i++){
        if(arr[i]==0){
            ZeroCount++;
        }
        if(arr[i]==1){
            OneCount++;
        }
    }
    cout<<"ZeroCount  = "<<ZeroCount<<" and OneCount = "<<OneCount<<endl;
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    inputArr(arr,n);
    countZeroOne(arr,n);
    outputArr(arr,n);
    return 0;
}