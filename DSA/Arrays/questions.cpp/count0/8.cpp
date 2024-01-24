//Sort zero ones
#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i = 0; i < n;i++){
        cout<<arr[i]<<" ";
    }
}
void inputArray(int arr[],int n){
    for(int i = 0; i < n;i++){
            cin>>arr[i];
    }
}
void SortZeroOne(int arr[],int n){
        int ZeroCount  = 0;
        int OneCount = 0;
    for(int i = 0; i < n;i++){
        if(arr[i]==0)
            ZeroCount++;
        if(arr[i]==1)
            OneCount++;
    }
    int i;
    for(i = 0; i < ZeroCount;i++){
        arr[i] = 0;
    }
    for(int j = i; j < n ; j++){
        arr[j] = 1;
    }

}

int main(){
    int arr[1000];
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    inputArray(arr,n);
    SortZeroOne(arr,n);
    printArray(arr,n);
    return 0;
}