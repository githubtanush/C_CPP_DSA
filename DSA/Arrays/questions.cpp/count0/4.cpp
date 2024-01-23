#include<iostream>
using namespace std;
void extremePrint(int arr[],int n){
    int left = 0;
    int right = n - 1;
    while(left<=right){
        if(left==right)
        cout<<arr[left]<<" ";
        else
    {
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
    }
        left++;
        right--;
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
    cout<<endl;
   extremePrint(arr,n);
    

    return 0;
}