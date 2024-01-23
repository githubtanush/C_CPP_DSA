//how to find min/max element from all numbers
//BestPractice = if we find minimum no. then say it minAns and assign INT_MAX in it.
//BestPractice = if we find maximum  no. then say it maxAns and assign INT_MIN in it.
//max(a,b) = to find max from both and //min(a,b) = to find min from both.
#include<iostream>
using namespace std;
int findMinimum(int arr[],int n){
        int minAns = INT_MAX;
        for(int i = 0; i < n;i++){
            if(arr[i]<minAns){
                minAns = arr[i];
            }
        }
        return minAns;
}
int findMaximum(int arr[],int n){
    int maxAns = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i]>maxAns){
            maxAns = arr[i];
        }
    }
    return maxAns;
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of the Array : "<<endl;
    cin>>n;
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
    int t = findMinimum(arr,n);
    cout<<"The Minimum no. in the array is : "<<t<<endl;
    
    int M = findMaximum(arr,n);
    cout<<"The Maximum no. in the array is : "<<M<<endl;

    return 0;
}