//print pairs
// #include<iostream>
// using namespace std;
// void printPairs(int arr[],int n){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout<<arr[i]<<","<<arr[j]<<endl;
//         }
//     }
// }
// void inputArray(int arr[],int n){
//     for(int i = 0; i < n;i++){
//             cin>>arr[i];
//     }
// }
// void printArray(int arr[],int n){
//     for(int i = 0; i < n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[1000];
//     int n;
//     cout<<"Enter the number of elements in the array : ";
//     cin>>n;
//     inputArray(arr,n);
//     printArray(arr,n);
//     cout<<endl;
//     printPairs(arr,n);
//     return 0;
// }


//print triplet
#include<iostream>
using namespace std;
void printPairs(int arr[],int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = j ; k < n; k++){
            cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
            }
        }
    }
}
void inputArray(int arr[],int n){
    for(int i = 0; i < n;i++){
            cin>>arr[i];
    }
}
void printArray(int arr[],int n){
    for(int i = 0; i < n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    inputArray(arr,n);
    printArray(arr,n);
    cout<<endl;
    printPairs(arr,n);
    return 0;
}