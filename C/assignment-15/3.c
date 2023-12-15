//programme to find fibonnaci series with the help of recursion
// #include<stdio.h>
// int fib(int n){
//     if(n==1 || n==2)
//         return n-1;
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n;
//     printf("Enter the value of n for which u find fibonnaci sequence : ");
//     scanf("%d",&n);
//     int m = fib(n);
//     printf("The value of fibonnaci sequence at this number is : %d",m);
//     getchar(); 
//     return 0;
// }


//array with recursion
#include<stdio.h>
int F[100];
int fib(int n){
    if(F[n-1]!=-1)
        return F[n-1];
    if(n==1 || n==2)
        F[n-1]=n-1;
    else
        F[n-1]=fib(n-1)+fib(n-2);
    return F[n-1];
}
int main(){
    int n;
    printf("Enter the value of n for which u find fibonnaci sequence : ");
    scanf("%d",&n);
    for(int i =0;i<99;i++){
        F[i]=-1;
    }
    int m = fib(n);
    printf("The value of fibonnaci sequence at this number is : %d",m);
    getchar(); 
    return 0;
}
