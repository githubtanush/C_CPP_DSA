#include<iostream>
using namespace std;
void input(int arr[],int n){
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
}
void output(int arr[],int n){
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
int getUnique(int arr[],int n){
    int ans = 0; 
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    input(arr,n);
    output(arr,n);
    cout<<endl;
    cout<<"The Unique element in the given array is : "<<getUnique(arr,n);
    return 0;
}