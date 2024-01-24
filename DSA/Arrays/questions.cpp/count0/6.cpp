//all negative number left hand side
#include<iostream>
using namespace std;
void takeinput(int arr[],int n){
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
}
void returnoutput(int arr[],int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
void negative(int arr[],int n){
    int count = 1;
    int brr[1000];
    for(int i = 0; i < n; i++){
        if(arr[i]<0){
            cin>>brr[i];
            count++;
        }
        else{
            continue;
        }
    }
    cout<<count;
    for(int i = 0 ; i < count; i++){
        cout<<brr[i]<<" ";
    }
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of the Array : ";
    cin>>n;
    takeinput(arr,n);
    returnoutput(arr,n);
    negative(arr,n);
    return 0;
}