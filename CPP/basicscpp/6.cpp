//define a function to print all the prime numbers of a given number
#include<iostream>
#include<math.h>
using namespace std;
int check_prime(int i){
    for(int j = 2; j < i;j++){
        if(i%j==0){
            return 0;
        }
    }
    return 1;
}
void find_prime (int n){
    for(int i = 1; i < n;i++){
        while(n%i==0){
           check_prime(i);
           cout<<i;
           n=n/i; 
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number for which u want to check the prime number : ";
    cin>>n;
    cout<<"The prime numbers for given number is : ";
    find_prime(n);
    return 0;
}