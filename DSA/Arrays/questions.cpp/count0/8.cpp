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
//Sort Zero one
// void SortZeroOne(int arr[],int n){
//         int ZeroCount  = 0;
//         int OneCount = 0;
//     for(int i = 0; i < n;i++){
//         if(arr[i]==0)
//             ZeroCount++;
//         if(arr[i]==1)
//             OneCount++;
//     }
//     int i;
//     for(i = 0; i < ZeroCount;i++){
//         arr[i] = 0;
//     }
//     for(int j = i; j < n ; j++){
//         arr[j] = 1;
//     }

// }


// //shift Array 
// void shiftArray(int arr[],int n){
//     //step 1
//     int temp= arr[n-1];
//     //step 2
//     for(int i = n-1; i >= 1; i--){
//         arr[i] = arr[i-1];
//     }
//     arr[0] = temp;
// }

//shift Array elements by k
//shift Array 
void shiftArray(int arr[],int n,int k){
    //step 1
    int temp[k];
    for(int i = 0; i < k; i++){
        temp[i]= arr[n-i-1];
    }
    //step 2
    for(int i = n-1; i >= k; i--){
        arr[i] = arr[i-k];
    }
    for(int i = 0; i < k;i++){
        arr[i] = temp[k-i-1];
    }
}

int main(){
    int arr[1000];
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    inputArray(arr,n);
    //SortZeroOne(arr,n);
    int k;
    cout<<"Enter the number of rotations which u want : ";
    cin>>k;
    //for(int i = 0; i < k;i++){
    shiftArray(arr,n,k);
    //}
    printArray(arr,n);
    return 0;
}